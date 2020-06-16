#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include<QMessageBox>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
   QPushButton *button = new QPushButton(this);
   button->setText("Click Me");
   button->move(100,100);
   connect(button,&QPushButton::clicked,[=]{
//       QMessageBox messages;
//       messages.setMinimumSize(400,500);
//       messages.setWindowTitle("Message Title");
//       messages.setText("Something happend");
//       messages.setInformativeText("Do you want to do somthing about it");
//       messages.setIcon(QMessageBox::Critical);
//       messages.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
//       messages.setDefaultButton(QMessageBox::Ok);

//      int ret=messages.exec();

       int ret=QMessageBox::critical(this,"Message Title",
                                     "Do you want to do somthing about it",QMessageBox::Ok | QMessageBox::Cancel);
       if(ret == QMessageBox::Ok)
       {
           qDebug().nospace().noquote() << "you are click ok button"<<ret<<endl;
       }
       else{
           qDebug().nospace().noquote() << "you are click Cancle button"<<ret<<endl;
       }
   });
}

MainWindow::~MainWindow()
{
    delete ui;
}

