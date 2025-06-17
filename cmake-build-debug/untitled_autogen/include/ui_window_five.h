/********************************************************************************
** Form generated from reading UI file 'window_five.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_FIVE_H
#define UI_WINDOW_FIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_window_five
{
public:
    QLabel *heart1;
    QTextBrowser *textBrowser;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_5;
    QLabel *heart2;
    QLabel *heart3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_6;

    void setupUi(QDialog *window_five)
    {
        if (window_five->objectName().isEmpty())
            window_five->setObjectName("window_five");
        window_five->resize(789, 475);
        window_five->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        heart1 = new QLabel(window_five);
        heart1->setObjectName("heart1");
        heart1->setGeometry(QRect(100, 20, 21, 21));
        heart1->setPixmap(QPixmap(QString::fromUtf8("../icons/full_heart.png")));
        heart1->setScaledContents(true);
        textBrowser = new QTextBrowser(window_five);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(70, 70, 631, 141));
        QFont font;
        font.setPointSize(14);
        textBrowser->setFont(font);
        radioButton = new QRadioButton(window_five);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(70, 240, 711, 21));
        QFont font1;
        font1.setPointSize(11);
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        radioButton_2 = new QRadioButton(window_five);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(70, 280, 711, 22));
        radioButton_2->setFont(font1);
        radioButton_3 = new QRadioButton(window_five);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(70, 320, 711, 22));
        radioButton_3->setFont(font1);
        radioButton_4 = new QRadioButton(window_five);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(70, 360, 711, 22));
        radioButton_4->setFont(font1);
        pushButton_5 = new QPushButton(window_five);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(700, 430, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Algerian")});
        font2.setPointSize(12);
        font2.setBold(false);
        pushButton_5->setFont(font2);
        heart2 = new QLabel(window_five);
        heart2->setObjectName("heart2");
        heart2->setGeometry(QRect(130, 20, 21, 21));
        heart2->setPixmap(QPixmap(QString::fromUtf8("../icons/full_heart.png")));
        heart2->setScaledContents(true);
        heart3 = new QLabel(window_five);
        heart3->setObjectName("heart3");
        heart3->setGeometry(QRect(160, 20, 21, 21));
        heart3->setPixmap(QPixmap(QString::fromUtf8("../icons/full_heart.png")));
        heart3->setScaledContents(true);
        label = new QLabel(window_five);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 81, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(16);
        font3.setBold(true);
        label->setFont(font3);
        label_2 = new QLabel(window_five);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 10, 151, 41));
        label_2->setFont(font3);
        label_3 = new QLabel(window_five);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 20, 91, 31));
        label_3->setFont(font3);
        lcdNumber = new QLCDNumber(window_five);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(690, 20, 81, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font4.setPointSize(10);
        font4.setBold(true);
        lcdNumber->setFont(font4);
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        pushButton_6 = new QPushButton(window_five);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(70, 420, 121, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Algerian")});
        font5.setPointSize(11);
        font5.setBold(false);
        pushButton_6->setFont(font5);

        retranslateUi(window_five);
        QObject::connect(pushButton_5, &QPushButton::clicked, window_five, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_6, &QPushButton::clicked, window_five, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(window_five);
    } // setupUi

    void retranslateUi(QDialog *window_five)
    {
        window_five->setWindowTitle(QCoreApplication::translate("window_five", "window_five", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("window_five", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; text-decoration: underline;\">Question 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\"> </span><span style=\" font-size:18pt;\">You want to use graph theory to optimize road paths. Which algorithm helps find the sh"
                        "ortest route between two locations?</span></p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("window_five", "A) Dijkstra\342\200\231s Algorithm", nullptr));
        radioButton_2->setText(QCoreApplication::translate("window_five", "B) Bubble Sort", nullptr));
        radioButton_3->setText(QCoreApplication::translate("window_five", "C) Newton\342\200\231s Method", nullptr));
        radioButton_4->setText(QCoreApplication::translate("window_five", "D) Banker's Algorithm", nullptr));
        pushButton_5->setText(QCoreApplication::translate("window_five", "SUBMIT", nullptr));
        label->setText(QCoreApplication::translate("window_five", "LIVES :", nullptr));
        label_2->setText(QCoreApplication::translate("window_five", "CHAPTER ###", nullptr));
        label_3->setText(QCoreApplication::translate("window_five", "SCORE :", nullptr));
        pushButton_6->setText(QCoreApplication::translate("window_five", "BUY QUESTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_five: public Ui_window_five {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_FIVE_H
