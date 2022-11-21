//
// Created by user on 27.03.2021.
//

#ifndef QT_FIRST_LAB_THIRDMAINWINDOW_H
#define QT_FIRST_LAB_THIRDMAINWINDOW_H

#include <QMainWindow>
#include "UI_MainWindowtThird.h"
#include "../../functions/Function.h"
#include "../../functions/Sin.h"
#include "../../functions/Pow.h"


class ThirdMainWindow: public QMainWindow, Ui_MainWindowThird {
    Q_OBJECT
public:
    explicit ThirdMainWindow(QWidget *parent=nullptr);

private slots:
    void clickEstimate();

private:
    std::map<std::string, Function *> fun_map{{"sin(x)", new Sin()},
                                              {"x^2", new Pow(2)}};

};


#endif //QT_FIRST_LAB_THIRDMAINWINDOW_H
