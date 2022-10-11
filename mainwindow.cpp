#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <memory>


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


void MainWindow::on_label_linkActivated(const QString &link)
{

}


void MainWindow::on_pushButton_clicked()
{
    hide();
    pvc->show();

}

