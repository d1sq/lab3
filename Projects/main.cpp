#include "functions/Sin.h"
#include "functions/Pow.h"
#include "functions/NodeSequence.h"
//#include "gui/second/SecondMainWindow.h"
#include "gui/third/ThirdMainWindow.h"
#include "gui/second/SecondMainWindow.h"
#include "gui/fourth/FourthMainWindow.h"
//#include "gui/first/MainWindow.h"
#include <QApplication>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    /* First Lab*/
    /*MainWindow main_window;
    main_window.setWindowTitle("Лабораторная 1");
    main_window.show();*/


    /* Second Lab */
    /*SecondMainWindow main_window;
    main_window.setWindowTitle("Лабораторная 2");
    main_window.show();*/

    /* Third Lab */
    /*ThirdMainWindow main_window;
    main_window.setWindowTitle("Лабораторная 3");
    main_window.show();*/

    /* Fourth Lab */
    FourthMainWindow main_window;
    main_window.setWindowTitle("Лабораторная 4");
    main_window.show();

    return QApplication::exec();
}
