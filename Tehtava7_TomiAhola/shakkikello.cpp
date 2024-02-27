#include "shakkikello.h"
#include "ui_shakkikello.h"


Shakkikello::Shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shakkikello)
{
    ui->setupUi(this);
    setGameInfoText("Please select game duration", 12);
    player1Time=100;
    player2Time=100;
}

Shakkikello::~Shakkikello()
{
    delete ui;
}

void Shakkikello::updateProgressBar()
{
    pQTimer->start(gameTime);
    switch (gameTime){
    case 1:
        pQTimer->start(1200);
        break;
    case 2:
        pQTimer->start(3000);
        break;
    }
}
void Shakkikello::setGameInfoText(QString info, short f)
{
    QFont font;
    font.setPointSize(f);
    font.setBold(true);
    ui->midLabel->setText(info);
    ui->midLabel->setFont(font);

}

void Shakkikello::timeout()
{
    switch (currentplayer){
    case 1:
        player1Time--;
        ui->pBar1->setValue(player1Time);
        break;
    case 2:
        player2Time--;
        ui->pBar2->setValue(player2Time);
        break;
    }
    if (player1Time==0){
        pQTimer->stop();
        setGameInfoText("Player 2 won!", 20);
    }
    else if (player2Time==0){
        pQTimer->stop();
        setGameInfoText("Player 1 won!", 20);
    }
}

void Shakkikello::on_startButton_clicked()
{
    run=1;
    pQTimer = new QTimer;
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    updateProgressBar();
}

void Shakkikello::on_endButton_clicked()
{
    if (run == 1){
        run=0;
        pQTimer->stop();
        delete pQTimer;
        pQTimer=nullptr;
        x=0;
        player1Time = 100;
        player2Time = 100;
        setGameInfoText("Game stopped, new game via start game", 12);
        qDebug()<< "timer stopped\n";
    }
    else {
        setGameInfoText("Nothing to end", 12);
    }
}

void Shakkikello::on_timeButton1_clicked()
{

    setGameInfoText("120 seconds, press start", 12);
    gameTime = 1;
    ui->pBar1->setValue(player1Time);
    ui->pBar2->setValue(player2Time);
}


void Shakkikello::on_pushButton_2_clicked()
{
    setGameInfoText("5 minutes, press start.", 12);
    gameTime = 2;
    ui->pBar1->setValue(player1Time);
    ui->pBar2->setValue(player2Time);
}


void Shakkikello::on_spButton1_clicked()
{
    pQTimer->stop();
    currentplayer=2;
    updateProgressBar();
}


void Shakkikello::on_spButton2_clicked()
{
    pQTimer->stop();
    currentplayer=1;
    updateProgressBar();
}

