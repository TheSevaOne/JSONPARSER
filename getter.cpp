#include "getter.h"
#include "mainwindow.h"
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QString>
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrlQuery>
#include <QNetworkReply>
#include <QUrl>
#include <QSslSocket>
Getter::Getter()
{

}

QNetworkReply * Getter::getData(QString str)
{

    //QLineEdit *l = ui->lineEdit;
    qDebug() << "ok";


    qDebug() << str;
    QNetworkAccessManager request;
    return request.get(QNetworkRequest(QUrl(str)));


}


QString Getter::onResult(QNetworkReply *reply)
{


    if(!reply->error()){
  qDebug() <<"in onResult";
  //        QJsonDocument doc1 = QJsonDocument::fromJson(reply->readAll());
//        QJsonDocument doc(doc1);
    //      QByteArray docByteArray = doc.toJson(QJsonDocument::Compact);
      //    QString str= QLatin1String(docByteArray);
         // reply->deleteLater();
        //  return str;
    }else
    {
        qDebug() << "ERROR";
               qDebug() << reply->errorString();
    }





}
