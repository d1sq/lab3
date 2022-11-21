/********************************************************************************
** Form generated from reading UI file 'fourth-gui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHMAINWINDOW_H
#define UI_FOURTHMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QtCharts/QtCharts"

QT_BEGIN_NAMESPACE

class Ui_MainWindowFourth
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *fun_label;
    QComboBox *fun_cmb;
    QLabel *error_label;
    QDoubleSpinBox *error_edit;
    QLabel *algorithm_label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *dihotom_rb;
    QRadioButton *newton_rb;
    QRadioButton *secand_rb;
    QLabel *first_param_label;
    QDoubleSpinBox *first_param_edit;
    QLabel *second_param_label;
    QDoubleSpinBox *second_param_edit;
    QPushButton *pushButton;
    QLabel *interations_label;
    QListWidget *listWidget;
    QLabel *count_iter_label;
    QLineEdit *count_iter_edit;
    QLabel *root_label;
    QLineEdit *root_edit;
    QLabel *a_label;
    QLabel *b_label;
    QDoubleSpinBox *a_edit;
    QDoubleSpinBox *b_edit;
    QPushButton *pushButton_2;
    QChartView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1432, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        fun_label = new QLabel(centralwidget);
        fun_label->setObjectName(QStringLiteral("fun_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fun_label);

        fun_cmb = new QComboBox(centralwidget);
        fun_cmb->addItem(QString());
        fun_cmb->addItem(QString());
        fun_cmb->setObjectName(QStringLiteral("fun_cmb"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fun_cmb);

        error_label = new QLabel(centralwidget);
        error_label->setObjectName(QStringLiteral("error_label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, error_label);

        error_edit = new QDoubleSpinBox(centralwidget);
        error_edit->setObjectName(QStringLiteral("error_edit"));
        error_edit->setDecimals(4);
        error_edit->setSingleStep(0.001);
        error_edit->setValue(0.01);

        formLayout->setWidget(5, QFormLayout::FieldRole, error_edit);

        algorithm_label = new QLabel(centralwidget);
        algorithm_label->setObjectName(QStringLiteral("algorithm_label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, algorithm_label);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dihotom_rb = new QRadioButton(groupBox);
        dihotom_rb->setObjectName(QStringLiteral("dihotom_rb"));
        dihotom_rb->setChecked(true);

        verticalLayout_2->addWidget(dihotom_rb);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        newton_rb = new QRadioButton(groupBox);
        newton_rb->setObjectName(QStringLiteral("newton_rb"));

        gridLayout_2->addWidget(newton_rb, 1, 0, 1, 1);

        secand_rb = new QRadioButton(groupBox);
        secand_rb->setObjectName(QStringLiteral("secand_rb"));

        gridLayout_2->addWidget(secand_rb, 2, 0, 1, 1);


        formLayout->setWidget(6, QFormLayout::FieldRole, groupBox);

        first_param_label = new QLabel(centralwidget);
        first_param_label->setObjectName(QStringLiteral("first_param_label"));

        formLayout->setWidget(7, QFormLayout::LabelRole, first_param_label);

        first_param_edit = new QDoubleSpinBox(centralwidget);
        first_param_edit->setObjectName(QStringLiteral("first_param_edit"));
        first_param_edit->setMinimum(-99);

        formLayout->setWidget(7, QFormLayout::FieldRole, first_param_edit);

        second_param_label = new QLabel(centralwidget);
        second_param_label->setObjectName(QStringLiteral("second_param_label"));

        formLayout->setWidget(8, QFormLayout::LabelRole, second_param_label);

        second_param_edit = new QDoubleSpinBox(centralwidget);
        second_param_edit->setObjectName(QStringLiteral("second_param_edit"));
        second_param_edit->setMinimum(-99);

        formLayout->setWidget(8, QFormLayout::FieldRole, second_param_edit);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(9, QFormLayout::FieldRole, pushButton);

        interations_label = new QLabel(centralwidget);
        interations_label->setObjectName(QStringLiteral("interations_label"));

        formLayout->setWidget(10, QFormLayout::LabelRole, interations_label);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        formLayout->setWidget(10, QFormLayout::FieldRole, listWidget);

        count_iter_label = new QLabel(centralwidget);
        count_iter_label->setObjectName(QStringLiteral("count_iter_label"));

        formLayout->setWidget(11, QFormLayout::LabelRole, count_iter_label);

        count_iter_edit = new QLineEdit(centralwidget);
        count_iter_edit->setObjectName(QStringLiteral("count_iter_edit"));
        count_iter_edit->setReadOnly(true);

        formLayout->setWidget(11, QFormLayout::FieldRole, count_iter_edit);

        root_label = new QLabel(centralwidget);
        root_label->setObjectName(QStringLiteral("root_label"));

        formLayout->setWidget(12, QFormLayout::LabelRole, root_label);

        root_edit = new QLineEdit(centralwidget);
        root_edit->setObjectName(QStringLiteral("root_edit"));

        formLayout->setWidget(12, QFormLayout::FieldRole, root_edit);

        a_label = new QLabel(centralwidget);
        a_label->setObjectName(QStringLiteral("a_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, a_label);

        b_label = new QLabel(centralwidget);
        b_label->setObjectName(QStringLiteral("b_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, b_label);

        a_edit = new QDoubleSpinBox(centralwidget);
        a_edit->setObjectName(QStringLiteral("a_edit"));
        a_edit->setMinimum(-99);

        formLayout->setWidget(2, QFormLayout::FieldRole, a_edit);

        b_edit = new QDoubleSpinBox(centralwidget);
        b_edit->setObjectName(QStringLiteral("b_edit"));
        b_edit->setMinimum(-99);
        b_edit->setValue(3.14);

        formLayout->setWidget(3, QFormLayout::FieldRole, b_edit);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_2);


        horizontalLayout->addLayout(formLayout);

        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(graphicsView);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindowFourth", "MainWindow", nullptr));
        fun_label->setText(QApplication::translate("MainWindowFourth", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217:", nullptr));
        fun_cmb->setItemText(0, QApplication::translate("MainWindowFourth", "sin(x)", nullptr));
        fun_cmb->setItemText(1, QApplication::translate("MainWindowFourth", "x^2", nullptr));

        error_label->setText(QApplication::translate("MainWindowFourth", "\320\242\320\276\321\207\320\275\320\276\321\201\321\202\321\214:", nullptr));
        algorithm_label->setText(QApplication::translate("MainWindowFourth", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274:", nullptr));
        groupBox->setTitle(QString());
        dihotom_rb->setText(QApplication::translate("MainWindowFourth", "\320\224\320\270\321\205\320\276\321\202\320\276\320\274\320\270\321\217", nullptr));
        newton_rb->setText(QApplication::translate("MainWindowFourth", "\320\235\321\214\321\216\321\202\320\276\320\275\320\260", nullptr));
        secand_rb->setText(QApplication::translate("MainWindowFourth", "\320\241\320\265\320\272\321\203\321\211\320\270\321\205", nullptr));
        first_param_label->setText(QApplication::translate("MainWindowFourth", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        second_param_label->setText(QApplication::translate("MainWindowFourth", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260:", nullptr));
        pushButton->setText(QApplication::translate("MainWindowFourth", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        interations_label->setText(QApplication::translate("MainWindowFourth", "\320\230\321\202\320\265\321\200\320\260\321\206\320\270\320\270:", nullptr));
        count_iter_label->setText(QApplication::translate("MainWindowFourth", "\320\232\320\276\320\273-\320\262\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271:", nullptr));
        root_label->setText(QApplication::translate("MainWindowFourth", "\320\232\320\276\321\200\320\265\320\275\321\214:", nullptr));
        a_label->setText(QApplication::translate("MainWindowFourth", "a:", nullptr));
        b_label->setText(QApplication::translate("MainWindowFourth", "b:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindowFourth", "\320\235\320\260\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowFourth: public Ui_MainWindowFourth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHMAINWINDOW_H
