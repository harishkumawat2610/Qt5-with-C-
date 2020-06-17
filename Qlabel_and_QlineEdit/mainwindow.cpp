#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
 QLabel * firstNameLabel=new QLabel("First Name",this);
 firstNameLabel->setMinimumSize(70,50);
 firstNameLabel->move(10,10);

 QLineEdit * firstNameEdit = new QLineEdit(this);
 firstNameEdit->setMinimumSize(200,50);
 firstNameEdit->move(100,10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

