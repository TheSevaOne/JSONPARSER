#ifndef GETTER_H
#define GETTER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QNetworkAccessManager>
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QUrl>
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class Getter
{

public:
      Getter();
    QString onResult(QNetworkReply *reply);
   QNetworkReply*  getData( QString str);


private:
     Ui::MainWindow *ui;
    QNetworkAccessManager *manager;

};

#endif // GETTER_H
