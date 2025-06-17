/********************************************************************************
** Form generated from reading UI file 'action_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTION_WINDOW_H
#define UI_ACTION_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_action_window
{
public:
    QLabel *label_3;
    QRadioButton *radioButton;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;

    void setupUi(QDialog *action_window)
    {
        if (action_window->objectName().isEmpty())
            action_window->setObjectName("action_window");
        action_window->resize(838, 467);
        action_window->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blood_wallpaper.png);"));
        label_3 = new QLabel(action_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 40, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        label_3->setFont(font);
        radioButton = new QRadioButton(action_window);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(120, 240, 701, 21));
        QFont font1;
        font1.setPointSize(11);
        radioButton->setFont(font1);
        lcdNumber = new QLCDNumber(action_window);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(710, 40, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font2.setPointSize(10);
        font2.setBold(true);
        lcdNumber->setFont(font2);
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(action_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 40, 291, 31));
        label_2->setFont(font);
        radioButton_3 = new QRadioButton(action_window);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(120, 320, 701, 22));
        radioButton_3->setFont(font1);
        pushButton_5 = new QPushButton(action_window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(710, 400, 71, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Algerian")});
        font3.setPointSize(12);
        font3.setBold(false);
        pushButton_5->setFont(font3);
        textBrowser = new QTextBrowser(action_window);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(120, 110, 601, 101));
        QFont font4;
        font4.setPointSize(12);
        textBrowser->setFont(font4);
        radioButton_2 = new QRadioButton(action_window);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(120, 280, 701, 22));
        radioButton_2->setFont(font1);
        radioButton_4 = new QRadioButton(action_window);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(120, 360, 701, 22));
        radioButton_4->setFont(font1);
        label_4 = new QLabel(action_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 40, 91, 31));
        label_4->setFont(font);
        lcdNumber_2 = new QLCDNumber(action_window);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(120, 40, 81, 31));
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(action_window);
        QObject::connect(pushButton_5, &QPushButton::clicked, action_window, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(action_window);
    } // setupUi

    void retranslateUi(QDialog *action_window)
    {
        action_window->setWindowTitle(QCoreApplication::translate("action_window", "action", nullptr));
        label_3->setText(QCoreApplication::translate("action_window", "SCORE :", nullptr));
        radioButton->setText(QCoreApplication::translate("action_window", "A) Dijkstra\342\200\231s Algorithm", nullptr));
        label_2->setText(QCoreApplication::translate("action_window", "THE CLOCK IS TICKING...\360\237\225\222", nullptr));
        radioButton_3->setText(QCoreApplication::translate("action_window", "C) Newton\342\200\231s Method", nullptr));
        pushButton_5->setText(QCoreApplication::translate("action_window", "SUBMIT", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("action_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">You want to use graph theory to optimize road paths. Which algorithm helps find the shortest route between two locations?</span></p></body></html>", nullptr));
        radioButton_2->setText(QCoreApplication::translate("action_window", "B) Bubble Sort", nullptr));
        radioButton_4->setText(QCoreApplication::translate("action_window", "D) Banker's Algorithm", nullptr));
        label_4->setText(QCoreApplication::translate("action_window", "TIMER :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class action_window: public Ui_action_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_WINDOW_H
