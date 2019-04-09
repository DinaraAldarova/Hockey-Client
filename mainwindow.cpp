#include "mainwindow.h"
#include "ui_mainwindow.h"

Client * client;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    client = new Client();
    QRegExp rx( "^[0-9]*$" );
    QValidator *validator = new QRegExpValidator(rx, this);

    ui->lineEditTime->setValidator(validator);
    ui->lineEditPeriod->setValidator(validator);
    connect(ui->pushButtonStart,SIGNAL(clicked(bool)),client,SLOT(start()));
    connect(ui->pushButtonStop,SIGNAL(clicked(bool)),client,SLOT(stop()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonTeam1_Name_clicked()
{
    client->team1_name(ui->textEditTeam1_Name->toPlainText());
}

void MainWindow::on_pushButtonTeam1_GoalSend_clicked()
{
    client->team1_goalsend(ui->textEditTeam1_Goal->toPlainText());
}

void MainWindow::on_pushButtonTeam1_GoalDel_clicked()
{
    client->team1_goaldel(ui->textEditTeam1_Goal->toPlainText());
}

void MainWindow::on_pushButtonTeam1_DelSend_clicked()
{
    client->team1_delsend(ui->textEditTeam1_Del->toPlainText());
}

void MainWindow::on_pushButtonTeam1_DelDel_clicked()
{
    client->team1_deldel(ui->textEditTeam1_Del->toPlainText());
}

void MainWindow::on_pushButtonTeam2_Name_clicked()
{
    client->team2_name(ui->textEditTeam2_Name->toPlainText());
}

void MainWindow::on_pushButtonTeam2_GoalSend_clicked()
{
    client->team2_goalsend(ui->textEditTeam2_Goal->toPlainText());
}

void MainWindow::on_pushButtonTeam2_GoalDel_clicked()
{
    client->team2_goaldel(ui->textEditTeam2_Goal->toPlainText());
}

void MainWindow::on_pushButtonTeam2_DelSend_clicked()
{
    client->team2_delsend(ui->textEditTeam2_Del->toPlainText());
}

void MainWindow::on_pushButtonTeam2_DelDel_clicked()
{
    client->team2_deldel(ui->textEditTeam2_Del->toPlainText());
}

void MainWindow::on_pushButtonTime_clicked()
{
    client->time(ui->lineEditTime->text());
}

void MainWindow::on_pushButtonPeriod_clicked()
{
    client->period(ui->lineEditPeriod->text());
}
