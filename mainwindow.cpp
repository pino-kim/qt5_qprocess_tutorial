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

    if( ret < 0) {
        qDebug() << "[QT5 DBG] Return value" << ret << ", do nothing";
    } else {
        qDebug() << "[QT5 DBG] Print stdout of script to textBrowser";
        ui->textBrowser_printStdout->setPlainText(demo->stdout_str);
    }
}


void MainWindow::on_pushButton_quit_clicked()
{
    this->close();
}

