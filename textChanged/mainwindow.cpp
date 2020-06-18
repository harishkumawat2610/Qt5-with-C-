#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //FirstName Label
 QLabel * firstNameLabel=new QLabel("First Name",this);
 firstNameLabel->setMinimumSize(70,50);
 firstNameLabel->move(10,10);
    //firstName Edit text box
 QLineEdit * firstNameEdit = new QLineEdit(this);
 firstNameEdit->setPlaceholderText("First Name");
 firstNameEdit->setAlignment(Qt::AlignCenter);
 firstNameEdit->setMinimumSize(200,50);
 firstNameEdit->move(100,10);


 //LastNameLabel
 QLabel * LastNameLabel=new QLabel("Last Name",this);
 LastNameLabel->setMinimumSize(10,50);
 LastNameLabel->move(10,70);
    //LastNameEdit text box
 QLineEdit * LastNameEdit = new QLineEdit(this);
 LastNameEdit->setPlaceholderText("Last Name");
 LastNameEdit->setAlignment(Qt::AlignCenter);
 LastNameEdit->setMinimumSize(200,50);
 LastNameEdit->move(100,70);


 //CityName label
 QLabel * CityNameLabel=new QLabel("City",this);
 CityNameLabel->setMinimumSize(10,50);
 CityNameLabel->move(10,130);
//CityNameEdit text box
 QLineEdit * CityNameEdit = new QLineEdit(this);
 CityNameEdit->setPlaceholderText("City Name");
 CityNameEdit->setAlignment(Qt::AlignCenter);
 CityNameEdit->setMinimumSize(200,50);
 CityNameEdit->move(100,130);

 //Button
 QFont buttonFont("Times",15,QFont::Bold);
 QPushButton * button = new QPushButton("Grab data",this);
 button->setFont(buttonFont);
 button->setMinimumSize(120,50);
 button->setStyleSheet("padding: 3px;");
 button->move(90,190);

// connect(button,&QPushButton::clicked,[=]{
//     QString firstName = firstNameEdit->text();
//     QString lastName = LastNameEdit->text();
//     QString city = CityNameEdit->text();


//     if(!firstName.isEmpty() && !lastName.isEmpty() && !city.isEmpty()){
//         qDebug().nospace().noquote()<<"fist name : "<<firstName;
//         qDebug().nospace().noquote()<<"Last name : "<<lastName;
//         qDebug().nospace().noquote()<<"City name : "<<city;
//     }
//     else {
//         qDebug().nospace().noquote()<<"One text box empty";
//     }

// });

 //editingFinished

 connect(firstNameEdit,&QLineEdit::textChanged,[=](){
     qDebug().nospace().noquote()<<"selection Changed : "<<firstNameEdit->text();
 });
}

MainWindow::~MainWindow()
{
    delete ui;
}

