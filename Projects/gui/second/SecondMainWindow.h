//
// Created by user on 23.03.2021.
//

#ifndef QT_FIRST_LAB_SECONDMAINWINDOW_H
#define QT_FIRST_LAB_SECONDMAINWINDOW_H


#include <QMainWindow>
#include "Ui_MainWindow.h"
#include "../../functions/Function.h"
#include "../../functions/Sin.h"
#include "../../functions/Pow.h"


class SecondMainWindow : public QMainWindow, Ui_MainWindow{
Q_OBJECT
public:
    explicit SecondMainWindow(QWidget *parent=nullptr);

private slots:
    void clickEstimate();

private:
    std::map<std::string, Function *> fun_map{{"sin(x)", new Sin()},
                                              {"x^2", new Pow(2)}};

};


#endif //QT_FIRST_LAB_SECONDMAINWINDOW_H
