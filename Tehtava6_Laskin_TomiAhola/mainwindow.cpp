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

void MainWindow::on_N0_clicked()
{
    switch (state){
        case 1:
            number1+="0";
            break;
        case 2:
            number2+="0";
            break;
    }

    numberClickedHandler();
}

void MainWindow::on_N1_clicked()
{
    switch (state){
        case 1:
            number1+="1";
            break;
        case 2:
            number2+="1";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    switch (state){
        case 1:
            number1+="2";
            break;
        case 2:
            number2+="2";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    switch (state){
        case 1:
            number1+="3";
            break;
        case 2:
            number2+="3";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    switch (state){
        case 1:
            number1+="4";
            break;
        case 2:
            number2+="4";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    switch (state){
        case 1:
            number1+="5";
            break;
        case 2:
            number2+="5";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    switch (state){
        case 1:
            number1+="6";
            break;
        case 2:
            number2+="6";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    switch (state){
        case 1:
            number1+="7";
            break;
        case 2:
            number2+="7";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    switch (state){
        case 1:
            number1+="8";
            break;
        case 2:
            number2+="8";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    switch (state){
        case 1:
            number1+="9";
            break;
        case 2:
            number2+="9";
            break;
    }
    numberClickedHandler();
}


void MainWindow::on_plus_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_Sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mult_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_B_exitprogram_clicked()
{
    qApp->exit();

}
void MainWindow::numberClickedHandler(){
    QPushButton * button =qobject_cast<QPushButton*>(sender());
    QString name = button-> objectName();
    qDebug() << "button name:" << name;
    ui->num1->setText(number1);
    ui->num2->setText(number2);
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button =qobject_cast<QPushButton*>(sender());

    if(button->objectName() ==  "clear")
    {
        state = 1;
        number1 = "";
        number2 = "";
        result = 0;
        resetLineEdits();
    }

    else
    {
        switch (operand)
        {

            case 0:
                result = number1.toFloat() + number2.toFloat();
                break;
            case 1:
                result = number1.toFloat() - number2.toFloat();
                break;
            case 2:
                result = number1.toFloat() * number2.toFloat();
                break;
            case 3:
                result = number1.toFloat() / number2.toFloat();
                break;
        }

    ui->result->setText(QString::number(result));
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button =qobject_cast<QPushButton*>(sender());

    if (button->objectName() == "plus" & number1 != "") // (number1 !="") blokkaa sen että ei voi vaihtua "num2" slottiin ennenkuin "num1" slotin sisällä on jotain dataa.
    {
        ui->funcText->setText("+");
        operand = 0;
        state = 2;
    }

    else if (button->objectName() == "sub" & number1 != "")
    {
            ui->funcText->setText("-");
            operand = 1;
            state = 2;
    }

    else if (button->objectName() == "mult" & number1 != "")
    {
            ui->funcText->setText("*");
            operand = 2;
            state = 2;
    }

    else
    {
        if (number1 != "")
        {
            ui->funcText->setText("/");
            operand = 3;
            state = 2;
        }
    }
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    ui->funcText->setText("");
}

