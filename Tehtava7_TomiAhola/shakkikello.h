#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>
#include <QFont>


QT_BEGIN_NAMESPACE
namespace Ui { class Shakkikello; }
QT_END_NAMESPACE

class Shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    Shakkikello(QWidget *parent = nullptr);
    ~Shakkikello();

public slots:
        void timeout();

private slots:
    void on_startButton_clicked();
    void on_endButton_clicked();
    void on_timeButton1_clicked();
    void on_pushButton_2_clicked();
    void on_spButton1_clicked();
    void on_spButton2_clicked();

private:
    int state = 0;
    short x=0;
    Ui::Shakkikello *ui;
    short player1Time;
    short player2Time;
    short currentplayer=1;
    short gameTime =1;
    short run=0;
    QTimer *pQTimer;
    void updateProgressBar();
    void setGameInfoText(QString, short);


};
#endif // SHAKKIKELLO_H
