/********************************************************************************
** Form generated from reading UI file 'review_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_WINDOW_H
#define UI_REVIEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_review_window
{
public:
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLCDNumber *lcdNumber;
    QLabel *label_6;
    QLabel *label_7;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;

    void setupUi(QDialog *review_window)
    {
        if (review_window->objectName().isEmpty())
            review_window->setObjectName("review_window");
        review_window->resize(861, 455);
        review_window->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blood_wallpaper.png);"));
        line_3 = new QFrame(review_window);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(150, 360, 541, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(review_window);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(190, 80, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(review_window);
        line->setObjectName("line");
        line->setGeometry(QRect(150, 80, 541, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(review_window);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(610, 360, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(review_window);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 10, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        pushButton_5 = new QPushButton(review_window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(770, 400, 41, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Algerian")});
        font1.setPointSize(20);
        font1.setBold(false);
        pushButton_5->setFont(font1);
        label_2 = new QLabel(review_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 40, 191, 41));
        label_2->setFont(font);
        label_3 = new QLabel(review_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 120, 201, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_3->setFont(font2);
        label_4 = new QLabel(review_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 270, 141, 41));
        label_4->setFont(font2);
        label_5 = new QLabel(review_window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 170, 171, 41));
        label_5->setFont(font2);
        lcdNumber = new QLCDNumber(review_window);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(500, 280, 71, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font3.setPointSize(10);
        font3.setBold(true);
        lcdNumber->setFont(font3);
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(review_window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 220, 191, 41));
        label_6->setFont(font2);
        label_7 = new QLabel(review_window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(340, 320, 111, 41));
        label_7->setFont(font2);
        lcdNumber_2 = new QLCDNumber(review_window);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(500, 330, 71, 21));
        lcdNumber_2->setFont(font3);
        lcdNumber_2->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_3 = new QLCDNumber(review_window);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(500, 230, 71, 21));
        lcdNumber_3->setFont(font3);
        lcdNumber_3->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_4 = new QLCDNumber(review_window);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(500, 180, 71, 21));
        lcdNumber_4->setFont(font3);
        lcdNumber_4->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_5 = new QLCDNumber(review_window);
        lcdNumber_5->setObjectName("lcdNumber_5");
        lcdNumber_5->setGeometry(QRect(500, 130, 71, 21));
        lcdNumber_5->setFont(font3);
        lcdNumber_5->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(review_window);
        QObject::connect(pushButton_5, &QPushButton::clicked, review_window, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(review_window);
    } // setupUi

    void retranslateUi(QDialog *review_window)
    {
        review_window->setWindowTitle(QCoreApplication::translate("review_window", "review_window", nullptr));
        label->setText(QCoreApplication::translate("review_window", "\342\217\261\357\270\217 TIME'S UP! ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("review_window", "-->", nullptr));
        label_2->setText(QCoreApplication::translate("review_window", "You ran out of time...", nullptr));
        label_3->setText(QCoreApplication::translate("review_window", "QUESTIONS ANSWERED:", nullptr));
        label_4->setText(QCoreApplication::translate("review_window", "POINTS EARNED:", nullptr));
        label_5->setText(QCoreApplication::translate("review_window", "CORRECT ANSWERS:", nullptr));
        label_6->setText(QCoreApplication::translate("review_window", "INCORRECT ANSWERS:", nullptr));
        label_7->setText(QCoreApplication::translate("review_window", "ACCUARACY:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class review_window: public Ui_review_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_WINDOW_H
