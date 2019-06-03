#include "choice.h"
#include "ui_choice.h"
#include<QApplication>
#include<QPushButton>
#include<QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>

using namespace std;
choice::choice(QWidget *parent) :
    QWidget(parent),
    ui(new choice)
{
    ui->setupUi(this);
}

choice::~choice()
{
    delete ui;
}

void choice::on_pushButton_2_clicked()
{
    int part = 1;

    InputView = new input(this);
    InputView -> show();
}

void choice::on_pushButton_clicked()
{
    int part = 0;
    InputView = new input(this);
    InputView -> show();
}
