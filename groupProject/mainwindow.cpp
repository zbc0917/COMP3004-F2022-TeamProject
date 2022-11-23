#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cs = new Controlsys();

    connect(ui->power,SIGNAL(released()), this, SLOT(changePowerStatus));
    connect(ui->up,SIGNAL(released()), this, SLOT(navigateMenuUp));
    connect(ui->down,SIGNAL(released()), this, SLOT(navigateMenuDown));
    connect(ui->check,SIGNAL(released()), this, SLOT(checkMenu));
    connect(ui->leftC,SIGNAL(released), this, SLOT(earConnectStatus));
    connect(ui->rightC,SIGNAL(released()), this, SLOT(earConnectStatus));
    connect(ui->back,SIGNAL(released()), this, SLOT(backMenu));

    UserMenu = new Menu("User MENU", {"User1","User2","User3","User4"});
    recordMainMenu = new Menu("User MENU", {"User1","User2","User3","User4"});
    timeMenu;
    typeMenu;
    intensityMenu;
    needRecordMenu;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changePowerStatus(){
    cs->changePowerStatus();
    if(cs->getPower()){
        ui->powerLED->setStyle("color:yellow");
    }else{
        ui->powerLED->setStyle("color:grey");
    }
}

void MainWindow::navigateMenuUp(){

}

void MainWindow::navigateMenuDown(){}
void MainWindow::checkMenu(){}
void MainWindow::earConnectStatus(){}
void MainWindow::backMenu(){}
