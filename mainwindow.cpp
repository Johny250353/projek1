#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDataStream>
#include <QtSql>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(!rejestrdb.open())
        ui->label_x->setText("baza danych On");
    else
        ui->label_x->setText("baza danych Off");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_utworz_clicked()
{
    MainWindow conn;
    QString n ,name, surname, data, h;
    n=ui->text_n->text();
    name=ui->text_name->text();
    surname=ui->text_sur->text();
    data=ui->text_day->text();
    h=ui->text_h->text();

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into rezerwacje (n,name,surname,data,h) values  ('"+n+"', '"+name+"', '"+surname+"', '"+data+"', '"+h+"' ) " );
            if(qry.exec())
    {
        QMessageBox::critical(this,tr("oksave"),tr("its ok!"));
        conn.connClose();
    }
            else
        {
         QMessageBox::critical(this,tr("nope"),tr("it is not ok!"));
        }
}

void MainWindow::on_button_edit_clicked()
{
    MainWindow conn;
    QString n ,name, surname, data, h;
    n=ui->text_n->text();
    name=ui->text_name->text();
    surname=ui->text_sur->text();
    data=ui->text_day->text();
    h=ui->text_h->text();

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update rezerwacje set n='"+n+"',name='"+name+"',surname='"+surname+"',data='"+data+"',h='"+h+"' where n='"+n+"' ");
            if(qry.exec())
    {
        QMessageBox::critical(this,tr("okedit"),tr("its ok!"));
        conn.connClose();
    }
            else
        {
         QMessageBox::critical(this,tr("nope"),tr("it is not ok!"));
        }
}

void MainWindow::on_button_usun_clicked()
{
    MainWindow conn;
    QString n ,name, surname, data, h;
    n=ui->text_n->text();

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("Delete from rezerwacje where n='"+n+"' ");
            if(qry.exec())
    {
        QMessageBox::critical(this,tr("okdel"),tr("its ok!"));
        conn.connClose();
    }
            else
        {
         QMessageBox::critical(this,tr("nope"),tr("it is not ok!"));
        }
}



void MainWindow::on_button_wyswietl_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal=new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry=new QSqlQuery(conn.rejestrdb);

    qry->prepare("select n, name, surname, h from rezerwacje");

    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());


}
