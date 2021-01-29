/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_1;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_BaudRate;
    QComboBox *comboBox_StopBit;
    QComboBox *comboBox_DataBit;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_ParityBit;
    QLabel *label_5;
    QComboBox *comboBox_PortNo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_CheckPort;
    QPushButton *pushButton_Connect;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEdit_Receive;
    QPushButton *pushButton_ClearScreen;
    QGroupBox *groupBox_6;
    QCustomPlot *widget_WaveDisplay;
    QGroupBox *groupBox_7;
    QPlainTextEdit *plainTextEdit_Send;
    QPushButton *pushButton_SendData;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_ReceiveChar;
    QRadioButton *radioButton_ReceiveHex;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_SendChar;
    QRadioButton *radioButton_SendHex;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox_AutoSend;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_Period;
    QSplitter *splitter;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QTimeEdit *timeEdit_PresentTime;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 559);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_1 = new QGroupBox(centralWidget);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        groupBox_1->setGeometry(QRect(20, 10, 191, 251));
        layoutWidget = new QWidget(groupBox_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 151, 160));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_BaudRate = new QComboBox(layoutWidget);
        comboBox_BaudRate->setObjectName(QStringLiteral("comboBox_BaudRate"));

        gridLayout->addWidget(comboBox_BaudRate, 1, 1, 1, 1);

        comboBox_StopBit = new QComboBox(layoutWidget);
        comboBox_StopBit->setObjectName(QStringLiteral("comboBox_StopBit"));

        gridLayout->addWidget(comboBox_StopBit, 4, 1, 1, 1);

        comboBox_DataBit = new QComboBox(layoutWidget);
        comboBox_DataBit->setObjectName(QStringLiteral("comboBox_DataBit"));

        gridLayout->addWidget(comboBox_DataBit, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_ParityBit = new QComboBox(layoutWidget);
        comboBox_ParityBit->setObjectName(QStringLiteral("comboBox_ParityBit"));

        gridLayout->addWidget(comboBox_ParityBit, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBox_PortNo = new QComboBox(layoutWidget);
        comboBox_PortNo->setObjectName(QStringLiteral("comboBox_PortNo"));

        gridLayout->addWidget(comboBox_PortNo, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox_1);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 190, 111, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_CheckPort = new QPushButton(layoutWidget1);
        pushButton_CheckPort->setObjectName(QStringLiteral("pushButton_CheckPort"));

        verticalLayout->addWidget(pushButton_CheckPort);

        pushButton_Connect = new QPushButton(layoutWidget1);
        pushButton_Connect->setObjectName(QStringLiteral("pushButton_Connect"));

        verticalLayout->addWidget(pushButton_Connect);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(230, 9, 411, 151));
        plainTextEdit_Receive = new QPlainTextEdit(groupBox_5);
        plainTextEdit_Receive->setObjectName(QStringLiteral("plainTextEdit_Receive"));
        plainTextEdit_Receive->setGeometry(QRect(10, 20, 291, 121));
        pushButton_ClearScreen = new QPushButton(groupBox_5);
        pushButton_ClearScreen->setObjectName(QStringLiteral("pushButton_ClearScreen"));
        pushButton_ClearScreen->setGeometry(QRect(320, 60, 71, 41));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(229, 170, 411, 221));
        widget_WaveDisplay = new QCustomPlot(groupBox_6);
        widget_WaveDisplay->setObjectName(QStringLiteral("widget_WaveDisplay"));
        widget_WaveDisplay->setGeometry(QRect(10, 20, 391, 191));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(230, 400, 411, 71));
        plainTextEdit_Send = new QPlainTextEdit(groupBox_7);
        plainTextEdit_Send->setObjectName(QStringLiteral("plainTextEdit_Send"));
        plainTextEdit_Send->setGeometry(QRect(10, 20, 291, 41));
        pushButton_SendData = new QPushButton(groupBox_7);
        pushButton_SendData->setObjectName(QStringLiteral("pushButton_SendData"));
        pushButton_SendData->setGeometry(QRect(320, 20, 71, 41));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(19, 269, 191, 51));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 186, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_ReceiveChar = new QRadioButton(layoutWidget2);
        radioButton_ReceiveChar->setObjectName(QStringLiteral("radioButton_ReceiveChar"));

        horizontalLayout->addWidget(radioButton_ReceiveChar);

        radioButton_ReceiveHex = new QRadioButton(layoutWidget2);
        radioButton_ReceiveHex->setObjectName(QStringLiteral("radioButton_ReceiveHex"));

        horizontalLayout->addWidget(radioButton_ReceiveHex);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(19, 329, 191, 51));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 186, 18));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_SendChar = new QRadioButton(layoutWidget3);
        radioButton_SendChar->setObjectName(QStringLiteral("radioButton_SendChar"));

        horizontalLayout_2->addWidget(radioButton_SendChar);

        radioButton_SendHex = new QRadioButton(layoutWidget3);
        radioButton_SendHex->setObjectName(QStringLiteral("radioButton_SendHex"));

        horizontalLayout_2->addWidget(radioButton_SendHex);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 390, 191, 81));
        checkBox_AutoSend = new QCheckBox(groupBox_4);
        checkBox_AutoSend->setObjectName(QStringLiteral("checkBox_AutoSend"));
        checkBox_AutoSend->setGeometry(QRect(10, 20, 71, 16));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 50, 171, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_Period = new QLineEdit(layoutWidget4);
        lineEdit_Period->setObjectName(QStringLiteral("lineEdit_Period"));

        horizontalLayout_3->addWidget(lineEdit_Period);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(0, 0, 0, 0));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(22, 477, 191, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(470, 474, 171, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget6);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        timeEdit_PresentTime = new QTimeEdit(layoutWidget6);
        timeEdit_PresentTime->setObjectName(QStringLiteral("timeEdit_PresentTime"));
        timeEdit_PresentTime->setMinimumSize(QSize(91, 20));
        timeEdit_PresentTime->setTimeSpec(Qt::LocalTime);

        horizontalLayout_5->addWidget(timeEdit_PresentTime);

        MainWindow->setCentralWidget(centralWidget);
        groupBox_1->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        groupBox_7->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        splitter->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 661, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_1->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_CheckPort->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButton_ClearScreen->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButton_SendData->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        radioButton_ReceiveChar->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_ReceiveHex->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        radioButton_SendChar->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_SendHex->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        checkBox_AutoSend->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        timeEdit_PresentTime->setDisplayFormat(QApplication::translate("MainWindow", "H:mm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
