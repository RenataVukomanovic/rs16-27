#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "number.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <algorithm>
#include <QDebug>
#include <string>
#include <iterator>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_num(0),
    m_allNums(0)
{
    ui->setupUi(this);


    // Postavljanje pozadine
    this->centralWidget()->setStyleSheet(
             "border-image:url(\"resursi/background.jpg\");"
    );



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNumber(Number* num)
{
    m_num.push_back(num);
}

