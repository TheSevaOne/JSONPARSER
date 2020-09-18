#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "getter.h"
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
  ui->textEdit->setText(g->onResult(g->getData(ui->line->text())));

}
