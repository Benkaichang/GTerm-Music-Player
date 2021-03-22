#include "GTermMainWindow.h"
#include "ui_GTermMainWindow.h"

GTermMainWindow::GTermMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GTermMainWindow)
{
    ui->setupUi(this);
}

GTermMainWindow::~GTermMainWindow()
{
    delete ui;
}

