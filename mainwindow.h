#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <getter.h>
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

private:
    Ui::MainWindow *ui;
    Getter *g;
      QNetworkAccessManager *request;
};
#endif // MAINWINDOW_H
