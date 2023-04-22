#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "information.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_18_clicked();

    void on_action_3_triggered();


    void on_pushButton_19_clicked();

private:
    Ui::MainWindow *ui;
    QString sz[100];
    QString sz1[100];
    QString sz2[100];

    QString temp = "";
    QString qshow = "";


    int i = 1;
    int j =1;
    int k =1;
    int t =1;

    int judge = 0;

    Information *gy;


    double line(int flag);
    double cclt( QString *xunz,int flag);
};
#endif // MAINWINDOW_H
