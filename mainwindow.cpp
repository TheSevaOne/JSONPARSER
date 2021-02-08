#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "getter.h"
#include <iostream>

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




void MainWindow::back (QNetworkReply *reply) {
   //Ui::MainWindow ui;
       qDebug() <<Q_FUNC_INFO << "QNetworkAccessManager::finished";
        //qDebug()<< reply->readAll().data();
           QByteArray bytes = reply->readAll();
        qDebug()<< bytes.size();

                      qDebug() << QString::fromUtf8(bytes.data(), bytes.size());
                      QString s = QString::fromUtf8(bytes.data(), bytes.size());
                          ui->textEdit->setText(s);
                                        reply->deleteLater();
}

void MainWindow::on_pushButton_clicked()
{
    //QLineEdit *l = ui->lineEdit;
    qDebug() << "ok";
      auto nam = new QNetworkAccessManager(this);
         connect(nam, &QNetworkAccessManager::finished,this, back);
            QNetworkRequest request;
                    request.setUrl(QUrl(ui->line->text()));
                                        nam->get(request);
}
