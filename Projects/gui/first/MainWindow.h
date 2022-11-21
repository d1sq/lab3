//
// Created by user on 21.03.2021.
//

#ifndef QT_FIRST_LAB_MAINWINDOW_H
#define QT_FIRST_LAB_MAINWINDOW_H


#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QSpinBox>

#include <QtCharts/QtCharts>
#include "../../functions/Function.h"
#include "../../functions/Sin.h"
#include "../../functions/Pow.h"
#include "../../functions/NodeSequence.h"

class MainWindow : public QWidget {
Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    void setupUI();

    void plot(const Function &function, double left_bound,
              double right_bound, int N, const QList<NodeSequence::Type> & types);

    void addSeries(const Function &function, double left_bound, double right_bound, int nodes_number, int N,
                   NodeSequence::Type type, QChart * fun_chart, QChart * error_chart,
                   const QString & first_caption, const QString & second_caption,
                   const QString & last_caption);

    template<class T>
    T *convertSeries(const NodeSequence &sequence);

private:
    QComboBox *function_cmb{};
    QDoubleSpinBox *left_boundary_edit{};
    QDoubleSpinBox *right_boundary_edit{};
    QSpinBox *nodes_count_edit{};
    QChartView *funPlotter{}, *distancePlotter{};
    QPushButton *plot_btn{};
    QCheckBox *uniform_check{}, *chebyshev_check{};
private:
    std::map<std::string, Function *> fun_map{{"sin(x)", new Sin()},
                                              {"x^2", new Pow(2)}};
private slots:

    void clickPlot();
};


#endif //QT_FIRST_LAB_MAINWINDOW_H
