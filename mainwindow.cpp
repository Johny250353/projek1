#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
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




void MainWindow::on_button_rezerw1_clicked() //dodaje rezerw
{
    QFile file("C:/Users/Admin/Documents/programrestuaracjav1/Rezerw.txt");

   if (!file.open(QFile::WriteOnly | QFile::Text))
   {
       QMessageBox::warning(this, "Error", "file not open");
       }
    {
   QTextStream out(&file);
   QString text = ui->plainTextEdit_2->toPlainText();
   out << text;
   file.flush();
   file.close();

}
  }

void MainWindow::on_button_unreserw1_clicked() //wyswietla rezerwacje
{
    QFile file("C:/Users/Admin/Documents/programrestuaracjav1/Rezerw.txt");

   if (!file.open(QFile::ReadOnly | QFile::Text))
   {
       QMessageBox::warning(this, "Error", "file not open");
       }
    {
   QTextStream in(&file);
   QString text = in.readAll();
   ui->plainTextEdit_2->setPlainText(text);
   file.flush();
   file.close();

}
  }

void MainWindow::on_button_dwor_clicked() //wyswietla menu i menu info Dworu polskiego
{
    QFile file("C:/Users/Admin/Documents/programrestuaracjav1/DWOR.txt");

   if (!file.open(QFile::ReadOnly | QFile::Text))
   {
       QMessageBox::warning(this, "Error1", "file not open");
       }
    {
   QTextStream in(&file);
   QString text = in.readAll();
   ui->textmenu->setPlainText(text);
   file.flush();
   file.close();

}
   QFile file2("C:/Users/Admin/Documents/programrestuaracjav1/INFODWOR.txt");

  if (!file2.open(QFile::ReadOnly | QFile::Text))
  {
      QMessageBox::warning(this, "Error2", "file not open");
      }
   {
  QTextStream in(&file2);
  QString text1 = in.readAll();
  ui->textEdit->setText(text1);
  file2.flush();
  file2.close();

}
}

void MainWindow::on_button_soczewka_clicked()
{
    QFile file("C:/Users/Admin/Documents/programrestuaracjav1/SOCZEWKA.txt");

   if (!file.open(QFile::ReadOnly | QFile::Text))
   {
       QMessageBox::warning(this, "Error1", "file not open");
       }
    {
   QTextStream in(&file);
   QString text = in.readAll();
   ui->textmenu->setPlainText(text);
   file.flush();
   file.close();

}
   QFile file2("C:/Users/Admin/Documents/programrestuaracjav1/INFOSOCZEWKA.txt");

  if (!file2.open(QFile::ReadOnly | QFile::Text))
  {
      QMessageBox::warning(this, "Error2", "file not open");
      }
   {
  QTextStream in(&file2);
  QString text1 = in.readAll();
  ui->textEdit->setText(text1);
  file2.flush();
  file2.close();

}
}

void MainWindow::on_button_Panda_clicked()
{
    {
        QFile file("C:/Users/Admin/Documents/programrestuaracjav1/PANDA.txt");

       if (!file.open(QFile::ReadOnly | QFile::Text))
       {
           QMessageBox::warning(this, "Error1", "file not open");
           }
        {
       QTextStream in(&file);
       QString text = in.readAll();
       ui->textmenu->setPlainText(text);
       file.flush();
       file.close();

    }
       QFile file2("C:/Users/Admin/Documents/programrestuaracjav1/INFOPANDA.txt");

      if (!file2.open(QFile::ReadOnly | QFile::Text))
      {
          QMessageBox::warning(this, "Error2", "file not open");
          }
       {
      QTextStream in(&file2);
      QString text1 = in.readAll();
      ui->textEdit->setText(text1);
      file2.flush();
      file2.close();

    }
    }

}

void MainWindow::on_button_bravo_clicked()
{
    {
        QFile file("C:/Users/Admin/Documents/programrestuaracjav1/BRAVO.txt");

       if (!file.open(QFile::ReadOnly | QFile::Text))
       {
           QMessageBox::warning(this, "Error1", "file not open");
           }
        {
       QTextStream in(&file);
       QString text = in.readAll();
       ui->textmenu->setPlainText(text);
       file.flush();
       file.close();

    }
       QFile file2("C:/Users/Admin/Documents/programrestuaracjav1/INFOBRAVO.txt");

      if (!file2.open(QFile::ReadOnly | QFile::Text))
      {
          QMessageBox::warning(this, "Error2", "file not open");
          }
       {
      QTextStream in(&file2);
      QString text1 = in.readAll();
      ui->textEdit->setText(text1);
      file2.flush();
      file2.close();

    }
    }

}
