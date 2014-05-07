/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *PatientName;
    QLabel *label_2;
    QSpinBox *AgePatient;
    QHBoxLayout *horizontalLayout;
    QCheckBox *pain;
    QCheckBox *heart;
    QCheckBox *Sangrando;
    QLabel *label_3;
    QComboBox *emergencyColor;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(855, 478);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 291, 261));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        PatientName = new QLineEdit(verticalLayoutWidget);
        PatientName->setObjectName(QStringLiteral("PatientName"));

        verticalLayout->addWidget(PatientName);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        AgePatient = new QSpinBox(verticalLayoutWidget);
        AgePatient->setObjectName(QStringLiteral("AgePatient"));
        AgePatient->setValue(18);

        verticalLayout->addWidget(AgePatient);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pain = new QCheckBox(verticalLayoutWidget);
        pain->setObjectName(QStringLiteral("pain"));

        horizontalLayout->addWidget(pain);

        heart = new QCheckBox(verticalLayoutWidget);
        heart->setObjectName(QStringLiteral("heart"));

        horizontalLayout->addWidget(heart);

        Sangrando = new QCheckBox(verticalLayoutWidget);
        Sangrando->setObjectName(QStringLiteral("Sangrando"));

        horizontalLayout->addWidget(Sangrando);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        emergencyColor = new QComboBox(verticalLayoutWidget);
        emergencyColor->setObjectName(QStringLiteral("emergencyColor"));
        emergencyColor->setEditable(false);
        emergencyColor->setMaxVisibleItems(10);
        emergencyColor->setInsertPolicy(QComboBox::InsertAtCurrent);

        verticalLayout->addWidget(emergencyColor);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralWidget);
        verticalLayoutWidget->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 855, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Name", 0));
        label_2->setText(QApplication::translate("MainWindow", "Age", 0));
        pain->setText(QApplication::translate("MainWindow", "pain", 0));
        heart->setText(QApplication::translate("MainWindow", "infarct", 0));
        Sangrando->setText(QApplication::translate("MainWindow", "Blood", 0));
        label_3->setText(QApplication::translate("MainWindow", "Emergency Color", 0));
        emergencyColor->clear();
        emergencyColor->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "RED", 0)
         << QApplication::translate("MainWindow", "ORANGE", 0)
         << QApplication::translate("MainWindow", "YELLOW", 0)
         << QApplication::translate("MainWindow", "GREEN", 0)
         << QApplication::translate("MainWindow", "BLUE", 0)
         << QApplication::translate("MainWindow", "WHITE", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "Insert Patient", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
