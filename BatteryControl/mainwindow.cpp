#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include "additional.h"

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

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Довідка", "Текст довідки");
}

void MainWindow::on_pushButton_5_clicked()
{
    Additional  add_window;
    add_window.setModal(true);
    add_window.exec();
}
