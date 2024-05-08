#include "./mainwindow.h"
#include <QMainWindow>

void mainwindow(QWidget *parent)
    QMainWindow(parent);
    , ui(new Ui::MainWindow)

{      ui->setupUi(this);
}

void mainwindow(){
    QMainWindow();
};


void ~MainWindow()
{
    delete Ui;
};
