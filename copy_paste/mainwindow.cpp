#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget::setFixedSize(650,500);
    //label
  QFont labelFont("Times",20,QFont::Bold);
  QLabel * mlabel = new QLabel("This is my Text",this);
  mlabel->setFont(labelFont);
  mlabel->setMinimumSize(650,30);
  mlabel->setAlignment(Qt::AlignCenter);

  QTextEdit *textEdit = new QTextEdit(this);
  textEdit->move(70,55);
  textEdit->setMinimumSize(550,250);

 QPushButton * CopyButton = new QPushButton("Copy",this);
 CopyButton->setMinimumSize(50,25);
// QPixmap pix("");
 QPixmap pixmap_copy(":/resources/icons_img/copy.png");
 QIcon ButtonIcon(pixmap_copy);
 CopyButton->setIcon(ButtonIcon);
 CopyButton->setIconSize(QSize(20,20));
 CopyButton->move(70,315);

 //CopyButton->setIcon();
 connect(CopyButton,&QPushButton::clicked,[=](){
     textEdit->copy();
 });

 QPushButton * CutButton = new QPushButton("Cut",this);
 CutButton->setMinimumSize(50,25);
 QPixmap pixmap_cut(":/resources/icons_img/cut.png");
 QIcon ButtonIcon_cut(pixmap_cut);
 CutButton->setIcon(ButtonIcon_cut);
 CutButton->setIconSize(QSize(20,25));
 CutButton->move(180,315);
 connect(CutButton,&QPushButton::clicked,[=](){
     textEdit->cut();
 });

 QPushButton * PasteButton = new QPushButton("Paste",this);
 PasteButton->setMinimumSize(50,25);
 QPixmap pixmap_paste(":/resources/icons_img/paste.png");
 QIcon ButtonIcon_paste(pixmap_paste);
 PasteButton->setIcon(ButtonIcon_paste);
 PasteButton->setIconSize(QSize(20,20));
 PasteButton->move(290,315);
 connect(PasteButton,&QPushButton::clicked,[=](){
     textEdit->paste();
 });

 QPushButton * UndoButton = new QPushButton("Undo",this);
 UndoButton->setMinimumSize(50,25);
 QPixmap pixmap_undo(":/resources/icons_img/undo.png");
 QIcon ButtonIcon_undo(pixmap_undo);
 UndoButton->setIcon(ButtonIcon_undo);
 UndoButton->setIconSize(QSize(20,20));
 UndoButton->move(400,315);
 connect(UndoButton,&QPushButton::clicked,[=](){
     textEdit->undo();
 });

 QPushButton * redoButton = new QPushButton("redo",this);
 redoButton->setMinimumSize(50,25);
 QPixmap pixmap_redo(":/resources/icons_img/redo.png");
 QIcon ButtonIcon_redo(pixmap_redo);
 redoButton->setIcon(ButtonIcon_redo);
 redoButton->setIconSize(QSize(20,20));
 redoButton->move(510,315);
 connect(redoButton,&QPushButton::clicked,[=](){
     textEdit->redo();
 });

 QPushButton * plainTextButton = new QPushButton("Sample Text",this);
 plainTextButton->setMinimumSize(100,25);
 plainTextButton->move(70,375);
 connect(plainTextButton,&QPushButton::clicked,[=](){
     textEdit->setPlainText("My Name Harish kumawat from Rajasthan . "
                            "I am a Data Scientist at globussoft company at Bangalore."
                            "I have one year internship experience and six months in globussoft company"
                            "I like machine learning and deep learning. ");
 });

 QPushButton * HtmlButton = new QPushButton("Html Text",this);
 HtmlButton->setMinimumSize(100,25);
 HtmlButton->move(180,375);
 connect(HtmlButton,&QPushButton::clicked,[=](){
     textEdit->setHtml("<!DOCTYPE html>"
                       "<html>"
                       "<head>"

                       "</head>"
                       "<body>"

                      " <h2>My Bio Data</h2>"

                       "<table>"
                         "<tr>"
                           "<th>Class</th>"
                           "<th>Board</th>"
                           "<th>%</th>"
                       "  </tr>"
                        " <tr>"
                        "   <td>12th</td>"
                          " <td>RBSE</td>"
                          " <td>80%</td>"
                        " </tr>"
                        " <tr>"
                        "   <td>10th</td>"
                          " <td>RBSE</td>"
                         "  <td>85%</td>"
                      "   </tr>"

                      " </table>"

                       "</body>"
                       "</html>");
});

}

MainWindow::~MainWindow()
{

}

