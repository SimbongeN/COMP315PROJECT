/********************************************************************************
** Form generated from reading UI file 'window_zero.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ZERO_H
#define UI_WINDOW_ZERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window_zero
{
public:
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QDialog *window_zero)
    {
        if (window_zero->objectName().isEmpty())
            window_zero->setObjectName("window_zero");
        window_zero->resize(845, 461);
        window_zero->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        label = new QLabel(window_zero);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 40, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        line = new QFrame(window_zero);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 90, 541, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(window_zero);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(180, 90, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton = new QPushButton(window_zero);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 190, 211, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(window_zero);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 270, 371, 41));
        pushButton_2->setFont(font1);
        line_3 = new QFrame(window_zero);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(160, 370, 541, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(window_zero);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(650, 370, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        retranslateUi(window_zero);
        QObject::connect(pushButton, &QPushButton::clicked, window_zero, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, window_zero, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(window_zero);
    } // setupUi

    void retranslateUi(QDialog *window_zero)
    {
        window_zero->setWindowTitle(QCoreApplication::translate("window_zero", "window_zero", nullptr));
        label->setText(QCoreApplication::translate("window_zero", "SELECT QUIZ MODE", nullptr));
        pushButton->setText(QCoreApplication::translate("window_zero", "STORYLINE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("window_zero", "RUSSIAN ROULETTE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_zero: public Ui_window_zero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ZERO_H
