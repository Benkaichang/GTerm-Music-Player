#ifndef GTERMMAINWINDOW_H
#define GTERMMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GTermMainWindow; }
QT_END_NAMESPACE

class GTermMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    GTermMainWindow(QWidget *parent = nullptr);
    ~GTermMainWindow();

private:
    Ui::GTermMainWindow *ui;
};
#endif // GTERMMAINWINDOW_H
