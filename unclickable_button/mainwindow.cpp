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
}

MainWindow::~MainWindow()
{
    delete ui;
}

