#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
 QFont buttonFont("Times",20,QFont::Bold);
 QPushButton * button=new QPushButton("Button1",this);
 button->setMinimumSize(100,100);
 button->setFont(buttonFont);
 connect(button,&QPushButton::clicked,[=]{
     qDebug().nospace().noquote() << "Click Qpush button";
 });

 QPushButton * button2=new QPushButton("Button2",this);
 button2->setMinimumSize(100,100);
 button2->move(105,0);
 button2->setFont(buttonFont);
 connect(button2,&QPushButton::pressed,[=]{
     qDebug().nospace().noquote() << "pressed Qpush button";
 });
 connect(button2,&QPushButton::released,[=]{
     qDebug().nospace().noquote() << "released Qpush button";
 });
}

MainWindow::~MainWindow()
{
    delete ui;
}

