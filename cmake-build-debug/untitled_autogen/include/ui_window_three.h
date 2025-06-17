/********************************************************************************
** Form generated from reading UI file 'window_three.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_THREE_H
#define UI_WINDOW_THREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_window_three
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *window_three)
    {
        if (window_three->objectName().isEmpty())
            window_three->setObjectName("window_three");
        window_three->resize(800, 450);
        window_three->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        window_three->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        pushButton_4 = new QPushButton(window_three);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 400, 41, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setPointSize(20);
        font.setBold(false);
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(window_three);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(740, 400, 41, 31));
        pushButton_5->setFont(font);
        textBrowser = new QTextBrowser(window_three);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(70, 110, 631, 201));
        QFont font1;
        font1.setPointSize(14);
        textBrowser->setFont(font1);
        label = new QLabel(window_three);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 791, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(26);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(window_three);
        QObject::connect(pushButton_4, &QPushButton::clicked, window_three, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, window_three, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(window_three);
    } // setupUi

    void retranslateUi(QDialog *window_three)
    {
        window_three->setWindowTitle(QCoreApplication::translate("window_three", "window_three", nullptr));
        pushButton_4->setText(QCoreApplication::translate("window_three", "<--", nullptr));
        pushButton_5->setText(QCoreApplication::translate("window_three", "-->", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("window_three", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">The city was on the brink. Traffic lights flickered out of sync, emergency services scrambled in confusion, and data streams\342\200\224once flowing in perfect harmony\342\200\224turned into chaos. But deep in a dimly lit control room, one developer stared at their screen with purpose.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:"
                        "12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("window_three", "WELCOME TO CHAPTER ###", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_three: public Ui_window_three {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_THREE_H
