/********************************************************************************
** Form generated from reading UI file 'keynum.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYNUM_H
#define UI_KEYNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Keynum
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *Keynum)
    {
        if (Keynum->objectName().isEmpty())
            Keynum->setObjectName(QStringLiteral("Keynum"));
        Keynum->resize(800, 480);
        lineEdit = new QLineEdit(Keynum);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 70, 113, 26));
        pushButton = new QPushButton(Keynum);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 130, 91, 26));
        lineEdit_2 = new QLineEdit(Keynum);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 170, 113, 26));
        dateTimeEdit = new QDateTimeEdit(Keynum);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(90, 210, 194, 27));

        retranslateUi(Keynum);

        QMetaObject::connectSlotsByName(Keynum);
    } // setupUi

    void retranslateUi(QWidget *Keynum)
    {
        Keynum->setWindowTitle(QApplication::translate("Keynum", "Keynum", 0));
        pushButton->setText(QApplication::translate("Keynum", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Keynum: public Ui_Keynum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYNUM_H
