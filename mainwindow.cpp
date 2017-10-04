#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mainwindow2.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    slider = new QSlider (Qt::Horizontal,this);
    slider->setRange(0,100);
    label = new QLabel;
    guzik = new QPushButton("Test",this);
    label->setText("Elo ");
    guzik->setGeometry(QRect(QPoint(100,120),QSize(50,50)));
     connect(guzik,SIGNAL(clicked(bool)), this,SLOT(guzik_clicked()));
    box = new QSpinBox(this);
    box->setGeometry(QRect(QPoint(300,300),QSize(50,50)));
    connect(slider,SIGNAL(valueChanged(int)),box,SLOT(setValue(int)));
    newWindow = new QPushButton("new window",this);
    newWindow->setGeometry(QRect(QPoint(150,170),QSize(100,50)));
    connect(newWindow,SIGNAL(clicked(bool)),this,SLOT(newWindow_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::guzik_clicked()
{
QMessageBox::information(this,"elo","asdsd");
}
void MainWindow::newWindow_clicked()
{
m = new MainWindow2;
m->show();

}

