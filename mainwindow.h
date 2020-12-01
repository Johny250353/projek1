#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    QSqlDatabase rejestrdb;

    void connClose()
    {
        rejestrdb.close();

    }
    bool connOpen()
    {
        QSqlDatabase rejestrdb=QSqlDatabase::addDatabase("rezerwacje");
        rejestrdb.setDatabaseName("C:/Users/Pingu/Desktop/pliki do odpalenia/rezerwacje.db");

        if(!rejestrdb.open())
        {
            qDebug()<<("no coś nie wyszło koleś");
            return false;
        }
        else
        {
            qDebug()<<("będzie działać!");
            return true;
        }

    }

private slots:

    //void on_button_bravo_clicked();


    void on_button_utworz_clicked();

    void on_button_edit_clicked();

    void on_button_usun_clicked();

    void on_button_wyswietl_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
