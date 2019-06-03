#ifndef INPUT_H
#define INPUT_H

#include <QWidget>

namespace Ui {
class input;
}

class input : public QWidget
{
    Q_OBJECT

public:
    explicit input(QWidget *parent = 0);
    ~input();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::input *ui;
};

#endif // INPUT_H
