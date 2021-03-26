/********************************************************************************
** Form generated from reading UI file 'GTermMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GTERMMAINWINDOW_H
#define UI_GTERMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GTermMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GTermMainWindow)
    {
        if (GTermMainWindow->objectName().isEmpty())
            GTermMainWindow->setObjectName(QString::fromUtf8("GTermMainWindow"));
        GTermMainWindow->resize(622, 408);
        GTermMainWindow->setMaximumSize(QSize(1080, 1920));
        centralwidget = new QWidget(GTermMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(1080, 1920));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 160, 75, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        pushButton->setFont(font);
        pushButton->setCheckable(false);
        GTermMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GTermMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 622, 23));
        GTermMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GTermMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GTermMainWindow->setStatusBar(statusbar);

        retranslateUi(GTermMainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), GTermMainWindow, SLOT(slot1()));
        QObject::connect(pushButton, &QPushButton::clicked, pushButton, qOverload<>(&QPushButton::animateClick));

        QMetaObject::connectSlotsByName(GTermMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GTermMainWindow)
    {
        GTermMainWindow->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "GTerm Music Player", nullptr));
        pushButton->setText(QCoreApplication::translate("GTermMainWindow", "Hello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GTermMainWindow: public Ui_GTermMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GTERMMAINWINDOW_H
