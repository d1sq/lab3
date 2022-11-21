//
// Created by user on 21.03.2021.
//

#include <QLabel>
#include <QComboBox>
#include <QSpinBox>
#include <QVBoxLayout>
#include "MainWindow.h"
#include "../../functions/NodeSequence.h"
#include "../../functions/LagrangePolynomial.h"
#include "../../functions/DistanceFunction.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent){
    setupUI();
}

void MainWindow::setupUI() {
    auto function_label = new QLabel("Функция", this);
    this->function_cmb = new QComboBox(this);
    this->function_cmb->addItem("sin(x)");
    this->function_cmb->addItem("x^2");
    auto fun_layout = new QVBoxLayout();
    fun_layout->addWidget(function_label);
    fun_layout->addWidget(this->function_cmb);

    auto left_boundary_label = new QLabel("Левая граница", this);
    this->left_boundary_edit = new QDoubleSpinBox(this);
    this->left_boundary_edit->setValue(0);
    this->left_boundary_edit->setMinimum(-100);

    auto left_layout = new QVBoxLayout();
    left_layout->addWidget(left_boundary_label);
    left_layout->addWidget(left_boundary_edit);

    auto right_boundary_label = new QLabel("Правая граница", this);
    this->right_boundary_edit = new QDoubleSpinBox(this);
    auto right_layout = new QVBoxLayout();
    right_layout->addWidget(right_boundary_label);
    right_layout->addWidget(right_boundary_edit);
    this->right_boundary_edit->setValue(10);
    this->right_boundary_edit->setMinimum(-100);


    auto nodes_count_label = new QLabel("Количество узлов", this);
    this->nodes_count_edit = new QSpinBox(this);
    this->nodes_count_edit->setValue(10);
    auto nodes_layout = new QVBoxLayout();
    nodes_layout->addWidget(nodes_count_label);
    nodes_layout->addWidget(nodes_count_edit);

    this->uniform_check = new QCheckBox("Равномерные", this);
    this->chebyshev_check = new QCheckBox("Чебышева", this);

    auto nodes_type_layout = new QVBoxLayout();
    nodes_type_layout->addWidget(this->uniform_check);
    nodes_type_layout->addWidget(this->chebyshev_check);

    auto box = new QGroupBox("Узлы", this);
    box->setLayout(nodes_type_layout);

    this->funPlotter = new QChartView(this);
    this->funPlotter->setFixedWidth(1200);
    this->funPlotter->setFixedHeight(300);
    this->funPlotter->setRenderHint(QPainter::Antialiasing);

    this->distancePlotter = new QChartView(this);
    this->distancePlotter->setFixedWidth(1200);
    this->distancePlotter->setFixedHeight(300);
    this->distancePlotter->setRenderHint(QPainter::Antialiasing);


    auto plotter_layout = new QVBoxLayout();
    plotter_layout->addWidget(this->funPlotter);
    plotter_layout->addWidget(this->distancePlotter);

    this->plot_btn = new QPushButton("Нарисовать");

    auto v_layout = new QVBoxLayout();
    v_layout->addLayout(fun_layout);
    v_layout->addLayout(left_layout);
    v_layout->addLayout(right_layout);
    v_layout->addLayout(nodes_layout);
    v_layout->addWidget(box);
    v_layout->addWidget(plot_btn);
    v_layout->addStretch(0);

    auto layout = new QHBoxLayout();
    layout->addLayout(v_layout);
    layout->addLayout(plotter_layout);

    setLayout(layout);

    connect(this->plot_btn, SIGNAL(clicked()), this, SLOT(clickPlot()));
}

void MainWindow::clickPlot() {
    QString function_name = this->function_cmb->currentText();
    Function * curr_function = this->fun_map[function_name.toStdString()];
    double left_bound = this->left_boundary_edit->value();
    double right_bound = this->right_boundary_edit->value();
    int nodes_number = this->nodes_count_edit->value();

    QList<NodeSequence::Type> types;
    if (this->uniform_check->isChecked())
        types.append(NodeSequence::UNIFORM);
    if(this->chebyshev_check->isChecked())
        types.append(NodeSequence::CHEBYSHEV);

    plot(*curr_function, left_bound, right_bound, nodes_number, types);
}

void MainWindow::addSeries(const Function &function, double left_bound, double right_bound, int nodes_number, int N,
                           NodeSequence::Type type, QChart * fun_chart, QChart * error_chart,
                           const QString & first_caption, const QString & second_caption,
                           const QString & last_caption){
    NodeSequence source_sequence(left_bound, right_bound, nodes_number, type, function);
    LagrangePolynomial lagrange(source_sequence);
    DistanceFunction distance_function(function, lagrange);
    NodeSequence sequence2(left_bound, right_bound, N, NodeSequence::Type::UNIFORM, lagrange);
    NodeSequence sequence3(left_bound, right_bound, N, NodeSequence::Type::UNIFORM, distance_function);
    auto series2 = convertSeries<QLineSeries>(sequence2);
    series2->setName(first_caption);
    auto series3 = convertSeries<QScatterSeries>(source_sequence);
    series3->setName(second_caption);
    series3->setMarkerSize(10);

    fun_chart->addSeries(series2);
    fun_chart->addSeries(series3);

    auto series4 = convertSeries<QLineSeries>(sequence3);
    series4->setName(last_caption);
    error_chart->addSeries(series4);
}

void MainWindow::plot(const Function &function, double left_bound, double right_bound, int nodes_number,
                      const QList<NodeSequence::Type> & types) {
    auto N = 200;

    NodeSequence sequence1(left_bound, right_bound, N, NodeSequence::Type::UNIFORM, function);
    auto series1 = convertSeries<QLineSeries>(sequence1);
    series1->setName("Исходная функция");

    auto chart = new QChart();
    auto font = chart->legend()->font();
    font.setPointSize(8);
    chart->legend()->setFont(font);
    chart->addSeries(series1);

    auto chart_error = new QChart();
    chart_error->legend()->setFont(font);

    if (types.contains(NodeSequence::Type::UNIFORM)){
        addSeries(function, left_bound, right_bound, nodes_number, N,
                  NodeSequence::Type::UNIFORM, chart, chart_error, "Многочлен Лагранжа по равномерным узлам",
                  "Равновмерные узлы", "Ошибка многочлена Лагранжа по равномерным узлам");
    }
    if (types.contains(NodeSequence::Type::CHEBYSHEV)){
        addSeries(function, left_bound, right_bound, nodes_number, N,
                  NodeSequence::Type::CHEBYSHEV, chart, chart_error, "Многочлен Лагранжа по узлам Чебышева",
                  "Узлы Чебышева", "Ошибка многочлена Лагранжа по узлам Чебышева");
    }

    chart->createDefaultAxes();
    this->funPlotter->setChart(chart);

    chart_error->createDefaultAxes();
    this->distancePlotter->setChart(chart_error);
}

template<class T>
T *MainWindow::convertSeries(const NodeSequence &sequence) {
   auto series = new T();
   int N = sequence.getLength();
   for (auto i = 0; i < N; ++i)
       series->append(sequence[i].getX(), sequence[i].getY());
    return series;
}
