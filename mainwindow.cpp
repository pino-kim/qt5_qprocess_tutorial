#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->demo = new DEMO;
}

MainWindow::~MainWindow()
{
    delete demo;
    delete ui;

}

void MainWindow::on_pushButton_runScript_clicked()
{
    int ret;
    ret = this->demo->run_test_script();
    qDebug() << "ret :" << ret;
}


void MainWindow::on_pushButton_quit_clicked()
{
    this->close();
}

