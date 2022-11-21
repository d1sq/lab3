//
// Created by user on 28.03.2021.
//

#ifndef QT_FIRST_LAB_FOURTHMAINWINDOW_H
#define QT_FIRST_LAB_FOURTHMAINWINDOW_H


#include <QMainWindow>
#include "../../functions/Function.h"
#include "UI_FourthMainWindow.h"
#include "../../functions/Sin.h"
#include "../../functions/Pow.h"

class FourthMainWindow : public QMainWindow, Ui_MainWindowFourth {
Q_OBJECT
public:
    explicit FourthMainWindow(QWidget *parent = nullptr);

private slots:

    void clickEstimate();
    void clickDraw();

    void setCurrentDichotomy();
    void setCurrentNewton();
    void setCurrentSecant();

private:
    std::map<std::string, Function *> fun_map{{"sin(x)", new Sin()},
                                              {"x^2",    new Pow(2)}};

    const Function * getCurrentFunction();

};


#endif //QT_FIRST_LAB_FOURTHMAINWINDOW_H
