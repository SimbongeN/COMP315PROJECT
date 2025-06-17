/********************************************************************************
** Form generated from reading UI file 'window_four.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_FOUR_H
#define UI_WINDOW_FOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_window_four
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *window_four)
    {
        if (window_four->objectName().isEmpty())
            window_four->setObjectName("window_four");
        window_four->resize(800, 450);
        window_four->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        pushButton_4 = new QPushButton(window_four);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 400, 41, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setPointSize(20);
        font.setBold(false);
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(window_four);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(740, 400, 41, 31));
        pushButton_5->setFont(font);
        textBrowser = new QTextBrowser(window_four);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 90, 631, 291));
        QFont font1;
        font1.setPointSize(14);
        textBrowser->setFont(font1);
        label = new QLabel(window_four);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 791, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(window_four);
        QObject::connect(pushButton_4, &QPushButton::clicked, window_four, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, window_four, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(window_four);
    } // setupUi

    void retranslateUi(QDialog *window_four)
    {
        window_four->setWindowTitle(QCoreApplication::translate("window_four", "window_four", nullptr));
        pushButton_4->setText(QCoreApplication::translate("window_four", "<--", nullptr));
        pushButton_5->setText(QCoreApplication::translate("window_four", "-->", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("window_four", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Emergency services in Metrovale are struggling to respond quickly due to inefficient dispatching and lack of real-time coordination. You must create a data-driven emergency response system that uses machine learning to prioritize incidents, predict high-risk zones, and automate the dispatch of resources like ambulances and fire trucks. Challenges include integrating data from multiple agencies and en"
                        "suring real-time performance under high load.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("window_four", "Automated Emergency Response System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_four: public Ui_window_four {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_FOUR_H
