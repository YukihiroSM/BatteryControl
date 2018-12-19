#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    if(QMessageBox::question(this, "Ви впевнені?", "Незбережені данні будуть знищені. \nЗавершити роботу програми?", QMessageBox::Yes | QMessageBox::No))
    {
       this->close();
    }
}
