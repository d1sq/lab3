//
// Created by user on 23.03.2021.
//

#include "SecondMainWindow.h"
#include "../../algorithms/Derivative/RightDerivativeEstimateAlgorithm.h"
#include "../../algorithms/Derivative/BothSideDerivativeEstimateAlgorithm.h"
#include "../../algorithms/Derivative/SecondDerivativeAlgorithm.h"

SecondMainWindow::SecondMainWindow(QWidget *parent) : QMainWindow(parent), Ui_MainWindow(){
    this->setupUi(this);

    connect(this->pushButton, SIGNAL(clicked()), this, SLOT(clickEstimate()));

}

void SecondMainWindow::clickEstimate() {
    QString function_name = this->function_cmb->currentText();
    Function * curr_function = this->fun_map[function_name.toStdString()];

    double x = this->x_edit->value();
    double step = this->step_edit->value();

    /* --------Right ------------*/
    RightDerivativeEstimateAlgorithm right_derivative(curr_function, step);
    this->tableWidget->setItem(0,0,
                               new QTableWidgetItem(QString::number(right_derivative.estimate(x))));
    this->tableWidget->setItem(0,1,
                               new QTableWidgetItem(QString::number(right_derivative.estimateError(x))));

    /* --------Both ------------*/
    BothSideDerivativeEstimateAlgorithm both_derivative(curr_function, step);
    this->tableWidget->setItem(1,0,
                               new QTableWidgetItem(QString::number(both_derivative.estimate(x))));
    this->tableWidget->setItem(1,1,
                               new QTableWidgetItem(QString::number(both_derivative.estimateError(x))));

    /* -----------Second derivative--------------*/
    SecondDerivativeAlgorithm second_derivative(curr_function, step);
    this->tableWidget->setItem(2,0,
                               new QTableWidgetItem(QString::number(second_derivative.estimate(x))));
    this->tableWidget->setItem(2,1,
                               new QTableWidgetItem(QString::number(second_derivative.estimateError(x))));

}
