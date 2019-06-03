#ifndef CHOICE_H
#define CHOICE_H

#include <QWidget>
#include"input.h"

namespace Ui {
class choice;
}

class choice : public QWidget
{
    Q_OBJECT

public:
    explicit choice(QWidget *parent = 0);
    ~choice();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::choice *ui;
    input *InputView;
};

#endif // CHOICE_H
