#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushbuttonInc_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Button click";
    ui->countResult->setText(""+s+"");

}


void MainWindow::on_pushButtonReset_pressed()
{
    qDebug() << "Reset Initiated";
    x=0;
    QString s = QString::number(x);
    ui->countResult->setText(""+s+"");
}


void MainWindow::on_quitButton_clicked()
{
    qApp->exit();
}

