/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTTHIRD_H
#define UI_MAINWINDOWTTHIRD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowThird
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *function_label;
    QComboBox *function_cmb;
    QLabel *a_label;
    QDoubleSpinBox *a_edit;
    QLabel *b_label;
    QDoubleSpinBox *b_edit;
    QPushButton *pushButton;
    QLabel *n_label;
    QSpinBox *n_edit;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(759, 220);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        function_label = new QLabel(groupBox);
        function_label->setObjectName(QStringLiteral("function_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, function_label);

        function_cmb = new QComboBox(groupBox);
        function_cmb->addItem(QString());
        function_cmb->addItem(QString());
        function_cmb->setObjectName(QStringLiteral("function_cmb"));

        formLayout->setWidget(0, QFormLayout::FieldRole, function_cmb);

        a_label = new QLabel(groupBox);
        a_label->setObjectName(QStringLiteral("a_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, a_label);

        a_edit = new QDoubleSpinBox(groupBox);
        a_edit->setObjectName(QStringLiteral("a_edit"));
        a_edit->setMinimum(-100);
        a_edit->setSingleStep(0.1);

        formLayout->setWidget(1, QFormLayout::FieldRole, a_edit);

        b_label = new QLabel(groupBox);
        b_label->setObjectName(QStringLiteral("b_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, b_label);

        b_edit = new QDoubleSpinBox(groupBox);
        b_edit->setObjectName(QStringLiteral("b_edit"));
        b_edit->setSingleStep(0.1);
        b_edit->setValue(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, b_edit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);

        n_label = new QLabel(groupBox);
        n_label->setObjectName(QStringLiteral("n_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, n_label);

        n_edit = new QSpinBox(groupBox);
        n_edit->setObjectName(QStringLiteral("n_edit"));
        n_edit->setMaximum(10000);
        n_edit->setValue(99);

        formLayout->setWidget(3, QFormLayout::FieldRole, n_edit);


        horizontalLayout_2->addLayout(formLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindowThird", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindowThird", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        function_label->setText(QApplication::translate("MainWindowThird", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217:", nullptr));
        function_cmb->setItemText(0, QApplication::translate("MainWindowThird", "sin(x)", nullptr));
        function_cmb->setItemText(1, QApplication::translate("MainWindowThird", "x^2", nullptr));

        a_label->setText(QApplication::translate("MainWindowThird", "a:", nullptr));
        b_label->setText(QApplication::translate("MainWindowThird", "b:", nullptr));
        pushButton->setText(QApplication::translate("MainWindowThird", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        n_label->setText(QApplication::translate("MainWindowThird", "N", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowThird", "\320\234\320\265\321\202\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowThird", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowThird", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowThird", "\320\242\321\200\320\260\320\277\320\265\321\206\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowThird: public Ui_MainWindowThird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTTHIRD_H
