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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GTermMainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GTermMainWindow)
    {
        if (GTermMainWindow->objectName().isEmpty())
            GTermMainWindow->setObjectName(QString::fromUtf8("GTermMainWindow"));
        GTermMainWindow->resize(800, 600);
        centralwidget = new QWidget(GTermMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(370, 230, 121, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 150, 51, 21));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(150, 330, 64, 23));
        GTermMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GTermMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        GTermMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GTermMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GTermMainWindow->setStatusBar(statusbar);

        retranslateUi(GTermMainWindow);

        QMetaObject::connectSlotsByName(GTermMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GTermMainWindow)
    {
        GTermMainWindow->setWindowTitle(QCoreApplication::translate("GTermMainWindow", "GTermMainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("GTermMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Hello World</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("GTermMainWindow", "GTerm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GTermMainWindow: public Ui_GTermMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GTERMMAINWINDOW_H
