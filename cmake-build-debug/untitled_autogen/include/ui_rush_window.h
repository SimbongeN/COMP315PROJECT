/********************************************************************************
** Form generated from reading UI file 'rush_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUSH_WINDOW_H
#define UI_RUSH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_rush_window
{
public:
    QFrame *line_3;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_4;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *rush_window)
    {
        if (rush_window->objectName().isEmpty())
            rush_window->setObjectName("rush_window");
        rush_window->resize(917, 459);
        rush_window->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blood_wallpaper.png);"));
        line_3 = new QFrame(rush_window);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(70, 380, 771, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(rush_window);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 661, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        line = new QFrame(rush_window);
        line->setObjectName("line");
        line->setGeometry(QRect(70, 70, 761, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(rush_window);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(110, 70, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(rush_window);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(760, 380, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        textBrowser = new QTextBrowser(rush_window);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(160, 110, 601, 271));
        pushButton_4 = new QPushButton(rush_window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(70, 410, 41, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Algerian")});
        font1.setPointSize(20);
        font1.setBold(false);
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(rush_window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(800, 410, 41, 31));
        pushButton_5->setFont(font1);

        retranslateUi(rush_window);
        QObject::connect(pushButton_4, &QPushButton::clicked, rush_window, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, rush_window, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(rush_window);
    } // setupUi

    void retranslateUi(QDialog *rush_window)
    {
        rush_window->setWindowTitle(QCoreApplication::translate("rush_window", "russian roulette", nullptr));
        label->setText(QCoreApplication::translate("rush_window", "\360\237\214\200 WELCOME TO RUSSIAN ROULETTE", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("rush_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Get ready to test your reflexes and knowledge under pressure!</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\342\217\261\357\270\217 You have 30 seconds to answer as many questions as you can.<br />\360\237\216"
                        "\257 Each correct answer earns you 9 points \342\200\224 but no points for wrong answers, so choose wisely!<br />\360\237\222\216 Use the points you earn here to buy hints or solutions in other quiz modes \342\200\224 your score is your currency!</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">This is your moment to shine \342\200\224 think fast, stay sharp, and rack up those points.<br />Are you ready to beat the clock and rise to the top?</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\360\237\216\256 Let the roulette roll\342\200\246 and let the rush begin!</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rush_window", "<--", nullptr));
        pushButton_5->setText(QCoreApplication::translate("rush_window", "-->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rush_window: public Ui_rush_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUSH_WINDOW_H
