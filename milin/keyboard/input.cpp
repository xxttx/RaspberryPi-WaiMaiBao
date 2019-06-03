#include "input.h"
#include "ui_input.h"
#include<QApplication>
#include<QPushButton>
#include<QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>

input::input(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::input)
{
    ui->setupUi(NULL);
}

input::~input()
{
    delete ui;
}

void input::on_pushButton_clicked()
{
    QLineEdit *lineedit = new QLineEdit();
    QString pwd = lineedit->text();
}
