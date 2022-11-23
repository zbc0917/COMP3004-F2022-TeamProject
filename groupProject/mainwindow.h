#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controlsys.h"
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void changePowerStatus();
    void navigateMenuUp();
    void navigateMenuDown();
    void checkMenu();
    void earConnectStatus();
    void backMenu();

private:
    Ui::MainWindow *ui;
    Menu *UserMenu;
    Menu *recordMainMenu;
    Menu *timeMenu;
    Menu *typeMenu;
    Menu *intensityMenu;
    Menu *needRecordMenu;

    Controlsys *cs;


};
#endif // MAINWINDOW_H
