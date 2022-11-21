//
// Created by user on 27.03.2021.
//

#include "ThirdMainWindow.h"
#include "../../algorithms/Integral/DefIntegralByRect.h"
#include "../../algorithms/Integral/DefIntegralByTrap.h"

ThirdMainWindow::ThirdMainWindow(QWidget *parent) : QMainWindow(parent), Ui_MainWindowThird(){
    this->setupUi(this);
    connect(this->pushButton, SIGNAL(clicked()), this, SLOT(clickEstimate()));
}

void ThirdMainWindow::clickEstimate() {
    QString function_name = this->function_cmb->currentText();
    Function * curr_function = this->fun_map[function_name.toStdString()];

    double a = this->a_edit->value();
    double b = this->b_edit->value();
    int N = this->n_edit->value();

    /* --------Rect------------*/
    DefIntegralByRect integralByRect(curr_function, N);
    DefIntegral::Result res = integralByRect.estimate(a, b);
    this->tableWidget->setItem(0,0,
                               new QTableWidgetItem(QString::number(res.value)));
    this->tableWidget->setItem(0,1,
                               new QTableWidgetItem(QString::number(res.error)));

    /* --------Trap------------*/
    DefIntegralByTrap integralByTrap(curr_function, N);
    DefIntegral::Result res_trap = integralByTrap.estimate(a, b);
    this->tableWidget->setItem(1,0,
                               new QTableWidgetItem(QString::number(res_trap.value)));
    this->tableWidget->setItem(1,1,
                               new QTableWidgetItem(QString::number(res_trap.error)));


}
