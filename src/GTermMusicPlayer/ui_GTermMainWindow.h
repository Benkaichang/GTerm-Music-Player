/********************************************************************************
** Form generated from reading UI file 'GTermMainWindowepoXWG.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GTERMMAINWINDOWEPOXWG_H
#define GTERMMAINWINDOWEPOXWG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GTermMainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GTermMainWindow)
    {
        if (GTermMainWindow->objectName().isEmpty())
            GTermMainWindow->setObjectName(QString::fromUtf8("GTermMainWindow"));
        GTermMainWindow->resize(622, 408);
        GTermMainWindow->setMaximumSize(QSize(1080, 1920));

        actionAbout = new QAction(GTermMainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));

        centralwidget = new QWidget(GTermMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1080, 1920));

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 621, 371));

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 131, 51));

        QFont font;
        font.setBold(true);

        pushButton->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 10, 131, 51));
        pushButton_2->setFont(font);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 150, 91, 31));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        GTermMainWindow->setCentralWidget(centralwidget);

        menubar = new QMenuBar(GTermMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 622, 22));
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

        retranslateUi(GTermMainWindow);

        QObject::connect(pushButton, &QPushButton::clicked, groupBox, qOverload<>(&QGroupBox::show));
        QObject::connect(pushButton, &QPushButton::clicked, label, qOverload<>(&QLabel::close));
        QObject::connect(actionAbout, &QAction::triggered, groupBox, qOverload<>(&QGroupBox::close));

        QMetaObject::connectSlotsByName(GTermMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GTermMainWindow)
    {
        GTermMainWindow->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "GTerm Music Player", nullptr));
        actionAbout->setText(QCoreApplication::translate("GTermMainWindow", "About", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GTermMainWindow", "GroupBox1", nullptr));
        pushButton->setText(QCoreApplication::translate("GTermMainWindow", "Get Input", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GTermMainWindow", "Show", nullptr));
        label->setText(QCoreApplication::translate("GTermMainWindow", "Haha", nullptr));
        menuHello->setTitle(QCoreApplication::translate("GTermMainWindow", "Hello", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GTermMainWindow: public Ui_GTermMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GTERMMAINWINDOWEPOXWG_H
