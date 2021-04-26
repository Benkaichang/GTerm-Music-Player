/********************************************************************************
** Form generated from reading UI file 'GTermMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GTERMMAINWINDOW_H
#define UI_GTERMMAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GTermMainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GTermMainWindow)
    {
        if (GTermMainWindow->objectName().isEmpty())
            GTermMainWindow->setObjectName(QString::fromUtf8("GTermMainWindow"));
        GTermMainWindow->resize(1080, 720);
        GTermMainWindow->setMaximumSize(QSize(1080, 1920));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        GTermMainWindow->setFont(font);
        GTermMainWindow->setLocale(QLocale(QLocale::English, QLocale::Australia));
        actionAbout = new QAction(GTermMainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionExit = new QAction(GTermMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(GTermMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1080, 1920));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 161, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6, 0, Qt::AlignHCenter|Qt::AlignBottom);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        GTermMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GTermMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 24));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName(QString::fromUtf8("menuHello"));
        GTermMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GTermMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GTermMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(GTermMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        GTermMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuHello->menuAction());
        menuHello->addSeparator();
        menuHello->addSeparator();
        menuHello->addAction(actionAbout);
        menuHello->addAction(actionExit);

        retranslateUi(GTermMainWindow);
        QObject::connect(actionExit, &QAction::triggered, GTermMainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(GTermMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GTermMainWindow)
    {
        GTermMainWindow->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "GTerm Music Player", nullptr));
        actionAbout->setText(QCoreApplication::translate("GTermMainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("GTermMainWindow", "Exit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("GTermMainWindow", "asfasdfasdfasdfasdf", nullptr));
        pushButton_7->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("GTermMainWindow", "PushButton", nullptr));
        menuHello->setTitle(QCoreApplication::translate("GTermMainWindow", "Hello", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GTermMainWindow: public Ui_GTermMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GTERMMAINWINDOW_H
