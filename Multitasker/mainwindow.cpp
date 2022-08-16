#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notepad.h"
#include "calculator.h"
#include "paint.h"

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


void MainWindow::on_pushButton_clicked()
{
    //Notepad notepad;
    //notepad.setModal(true);
    //notepad.exec();
    notepad =new class notepad(this);
    notepad->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    //Calculator calculator;
    //calculator.setModal(true);
    //calculator.exec();
    calculator =new class calculator(this);
    calculator->show();
}
