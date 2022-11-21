//
// Created by user on 28.03.2021.
//

#include "FourthMainWindow.h"
#include "../../algorithms/RootFinder/IterableRootFinder.h"
#include "../../algorithms/RootFinder/DichotomyRootFinder.h"
#include "../../algorithms/RootFinder/NewtonRootFinder.h"
#include "../../algorithms/RootFinder/SecantRootFinder.h"

FourthMainWindow::FourthMainWindow(QWidget *parent)
    :QMainWindow(parent), Ui_MainWindowFourth(){
    this->setupUi(this);
    connect(this->pushButton, SIGNAL(clicked()), this, SLOT(clickEstimate()));
    connect(this->pushButton_2, SIGNAL(clicked()), this, SLOT(clickDraw()));

    connect(this->dihotom_rb, SIGNAL(clicked()), this, SLOT(setCurrentDichotomy()));
    connect(this->newton_rb, SIGNAL(clicked()), this, SLOT(setCurrentNewton()));
    connect(this->secand_rb, SIGNAL(clicked()), this, SLOT(setCurrentSecant()));
}

void FourthMainWindow::clickDraw() {
    double a = this->a_edit->value();
    double b = this->b_edit->value();

    const Function * curr_function = this -> getCurrentFunction();

    auto series = new QLineSeries();
    series->setName(this->fun_cmb->currentText());
    const int N = 200;
    double delta = (b-a) / (N-1);
    for(auto i = 0;i < N; i++){
        auto x = a + delta * i;
        auto y = (*curr_function)(x);
        series->append(x, y);
    }
    auto chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    this->graphicsView->setChart(chart);
}

void FourthMainWindow::clickEstimate() {
    const Function * curr_function = this -> getCurrentFunction();

    double error = this->error_edit->value();

    IterableRootFinder * root_finder = nullptr;

    if (this->dihotom_rb->isChecked()){
        double a = this->first_param_edit->value();
        double b = this->second_param_edit->value();
        root_finder = new DichotomyRootFinder(curr_function, error, a, b);
    }
    else if(this->newton_rb->isChecked()){
        double x_0 = this->first_param_edit->value();
        root_finder = new NewtonRootFinder(curr_function, error, x_0);
    } else {
        double x_0 = this->first_param_edit->value();
        double x_1 = this->second_param_edit->value();
        root_finder = new SecantRootFinder(curr_function, error, x_0, x_1);
    }

    double root = root_finder->estimateRoot();
    const std::vector<double> & approximations = root_finder->getApproximations();

    this->root_edit->setText(QString::number(root));
    this->count_iter_edit->setText(QString::number(approximations.size()));

    this->listWidget->clear();
    for(auto item: approximations)
        this->listWidget->addItem(QString::number(item));
}

void FourthMainWindow::setCurrentDichotomy() {
    this->first_param_label->setText("Левая граница");
    this->second_param_label->setText("Правая граница");
    this->second_param_label->setVisible(true);
    this->second_param_edit->setVisible(true);
}

void FourthMainWindow::setCurrentNewton() {
    this->first_param_label->setText("x_0");
    this->second_param_label->setVisible(false);
    this->second_param_edit->setVisible(false);
}

void FourthMainWindow::setCurrentSecant() {
    this->first_param_label->setText("x_0");
    this->second_param_label->setText("x_1");
    this->second_param_label->setVisible(true);
    this->second_param_edit->setVisible(true);
}

const Function *FourthMainWindow::getCurrentFunction() {
    QString function_name = this->fun_cmb->currentText();
    return this->fun_map[function_name.toStdString()];
}


