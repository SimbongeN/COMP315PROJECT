/********************************************************************************
** Form generated from reading UI file 'story_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORY_WINDOW_H
#define UI_STORY_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_story_window
{
public:
    QFrame *line_3;
    QPushButton *pushButton_4;
    QFrame *line_4;
    QTextBrowser *textBrowser;
    QFrame *line_2;
    QLabel *label;
    QPushButton *pushButton_5;
    QFrame *line;

    void setupUi(QDialog *story_window)
    {
        if (story_window->objectName().isEmpty())
            story_window->setObjectName("story_window");
        story_window->resize(914, 457);
        story_window->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        line_3 = new QFrame(story_window);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(70, 370, 771, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_4 = new QPushButton(story_window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 400, 41, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Algerian")});
        font.setPointSize(20);
        font.setBold(false);
        pushButton_4->setFont(font);
        line_4 = new QFrame(story_window);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(760, 370, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        textBrowser = new QTextBrowser(story_window);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(160, 100, 601, 271));
        line_2 = new QFrame(story_window);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(100, 60, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(story_window);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 561, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);
        pushButton_5 = new QPushButton(story_window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(800, 400, 41, 31));
        pushButton_5->setFont(font);
        line = new QFrame(story_window);
        line->setObjectName("line");
        line->setGeometry(QRect(70, 60, 761, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        retranslateUi(story_window);
        QObject::connect(pushButton_4, &QPushButton::clicked, story_window, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, story_window, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(story_window);
    } // setupUi

    void retranslateUi(QDialog *story_window)
    {
        story_window->setWindowTitle(QCoreApplication::translate("story_window", "story_mode", nullptr));
        pushButton_4->setText(QCoreApplication::translate("story_window", "<--", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("story_window", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Get ready to shape Ethan\342\200\231s fate through choices, challenges, and triumphs!<br />\360\237\223\230 Navigate through 6 story-driven chapters, each with 10 multiple-choice questions.<br />\342\235\244\357\270\217 You have 3 lives per question \342\200\224 lose them all, and the chapter resets with a new twist.<br />\342\232\240\357\270\217 True/"
                        "False questions are sudden-death \342\200\224 only 1 life to get it right!<br />\360\237\216\257 Each correct answer earns you 9 points \342\200\224 your knowledge is your power.<br />\360\237\222\216 Use points to unlock helpful solutions when you're stuck.<br />This is your story to tell \342\200\224 stay sharp, choose wisely, and lead Ethan to victory.<br />Are you ready to begin the journey?<br />\360\237\216\256 Let the story unfold\342\200\246 and let the challenge begin!</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("story_window", "\360\237\214\237WELCOME TO ETHAN'S JOURNEY\360\237\214\237", nullptr));
        pushButton_5->setText(QCoreApplication::translate("story_window", "-->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class story_window: public Ui_story_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORY_WINDOW_H
