#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <client.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonTeam1_Name_clicked();

    void on_pushButtonTeam1_GoalSend_clicked();

    void on_pushButtonTeam1_GoalDel_clicked();

    void on_pushButtonTeam1_DelSend_clicked();

    void on_pushButtonTeam1_DelDel_clicked();

    void on_pushButtonTeam2_Name_clicked();

    void on_pushButtonTeam2_GoalSend_clicked();

    void on_pushButtonTeam2_GoalDel_clicked();

    void on_pushButtonTeam2_DelSend_clicked();

    void on_pushButtonTeam2_DelDel_clicked();

    void on_pushButtonTime_clicked();

    void on_pushButtonPeriod_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
