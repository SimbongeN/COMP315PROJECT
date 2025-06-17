/********************************************************************************
** Form generated from reading UI file 'achievements.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHIEVEMENTS_H
#define UI_ACHIEVEMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_achievements
{
public:
    QLabel *label;
    QPushButton *pushButton_4;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLabel *heart3_5;
    QLabel *heart3_6;
    QLabel *heart3_7;
    QLabel *heart3_8;
    QLabel *heart3_9;
    QLabel *heart3_14;
    QLabel *heart3_15;
    QLabel *heart3_17;
    QLabel *heart3_18;
    QLabel *heart3_19;
    QLabel *heart3_20;
    QLabel *heart3_21;
    QLabel *heart3_22;
    QLabel *heart3_23;
    QLabel *heart3_24;
    QLabel *heart3_25;
    QLabel *heart3_26;
    QLabel *heart3_27;
    QLabel *heart3_28;
    QLabel *heart3_16;
    QLabel *heart3_29;
    QLCDNumber *lcdNumber_7;

    void setupUi(QDialog *achievements)
    {
        if (achievements->objectName().isEmpty())
            achievements->setObjectName("achievements");
        achievements->resize(800, 450);
        achievements->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        label = new QLabel(achievements);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 281, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton_4 = new QPushButton(achievements);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 400, 41, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Algerian")});
        font1.setPointSize(20);
        font1.setBold(false);
        pushButton_4->setFont(font1);
        line = new QFrame(achievements);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 80, 611, 16));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(achievements);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 110, 121, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(achievements);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 150, 121, 20));
        label_3->setFont(font2);
        label_4 = new QLabel(achievements);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 190, 141, 20));
        label_4->setFont(font2);
        label_5 = new QLabel(achievements);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 226, 131, 20));
        label_5->setFont(font2);
        label_6 = new QLabel(achievements);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 270, 121, 16));
        label_6->setFont(font2);
        label_7 = new QLabel(achievements);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 310, 111, 16));
        label_7->setFont(font2);
        label_8 = new QLabel(achievements);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 350, 141, 16));
        label_8->setFont(font2);
        lcdNumber = new QLCDNumber(achievements);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(590, 110, 64, 23));
        lcdNumber_2 = new QLCDNumber(achievements);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(590, 150, 64, 23));
        lcdNumber_3 = new QLCDNumber(achievements);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(590, 190, 64, 23));
        lcdNumber_4 = new QLCDNumber(achievements);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(590, 230, 64, 23));
        lcdNumber_5 = new QLCDNumber(achievements);
        lcdNumber_5->setObjectName("lcdNumber_5");
        lcdNumber_5->setGeometry(QRect(590, 270, 64, 23));
        lcdNumber_6 = new QLCDNumber(achievements);
        lcdNumber_6->setObjectName("lcdNumber_6");
        lcdNumber_6->setGeometry(QRect(590, 310, 64, 23));
        heart3_5 = new QLabel(achievements);
        heart3_5->setObjectName("heart3_5");
        heart3_5->setGeometry(QRect(390, 110, 21, 21));
        heart3_5->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_5->setScaledContents(true);
        heart3_6 = new QLabel(achievements);
        heart3_6->setObjectName("heart3_6");
        heart3_6->setGeometry(QRect(420, 110, 21, 21));
        heart3_6->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_6->setScaledContents(true);
        heart3_7 = new QLabel(achievements);
        heart3_7->setObjectName("heart3_7");
        heart3_7->setGeometry(QRect(450, 110, 21, 21));
        heart3_7->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_7->setScaledContents(true);
        heart3_8 = new QLabel(achievements);
        heart3_8->setObjectName("heart3_8");
        heart3_8->setGeometry(QRect(390, 150, 21, 21));
        heart3_8->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_8->setScaledContents(true);
        heart3_9 = new QLabel(achievements);
        heart3_9->setObjectName("heart3_9");
        heart3_9->setGeometry(QRect(420, 150, 21, 21));
        heart3_9->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_9->setScaledContents(true);
        heart3_14 = new QLabel(achievements);
        heart3_14->setObjectName("heart3_14");
        heart3_14->setGeometry(QRect(450, 190, 21, 21));
        heart3_14->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_14->setScaledContents(true);
        heart3_15 = new QLabel(achievements);
        heart3_15->setObjectName("heart3_15");
        heart3_15->setGeometry(QRect(420, 190, 21, 21));
        heart3_15->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_15->setScaledContents(true);
        heart3_17 = new QLabel(achievements);
        heart3_17->setObjectName("heart3_17");
        heart3_17->setGeometry(QRect(450, 230, 21, 21));
        heart3_17->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_17->setScaledContents(true);
        heart3_18 = new QLabel(achievements);
        heart3_18->setObjectName("heart3_18");
        heart3_18->setGeometry(QRect(420, 230, 21, 21));
        heart3_18->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_18->setScaledContents(true);
        heart3_19 = new QLabel(achievements);
        heart3_19->setObjectName("heart3_19");
        heart3_19->setGeometry(QRect(390, 230, 21, 21));
        heart3_19->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_19->setScaledContents(true);
        heart3_20 = new QLabel(achievements);
        heart3_20->setObjectName("heart3_20");
        heart3_20->setGeometry(QRect(450, 270, 21, 21));
        heart3_20->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_20->setScaledContents(true);
        heart3_21 = new QLabel(achievements);
        heart3_21->setObjectName("heart3_21");
        heart3_21->setGeometry(QRect(420, 270, 21, 21));
        heart3_21->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_21->setScaledContents(true);
        heart3_22 = new QLabel(achievements);
        heart3_22->setObjectName("heart3_22");
        heart3_22->setGeometry(QRect(390, 270, 21, 21));
        heart3_22->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_22->setScaledContents(true);
        heart3_23 = new QLabel(achievements);
        heart3_23->setObjectName("heart3_23");
        heart3_23->setGeometry(QRect(450, 310, 21, 21));
        heart3_23->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_23->setScaledContents(true);
        heart3_24 = new QLabel(achievements);
        heart3_24->setObjectName("heart3_24");
        heart3_24->setGeometry(QRect(420, 310, 21, 21));
        heart3_24->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_24->setScaledContents(true);
        heart3_25 = new QLabel(achievements);
        heart3_25->setObjectName("heart3_25");
        heart3_25->setGeometry(QRect(390, 310, 21, 21));
        heart3_25->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_25->setScaledContents(true);
        heart3_26 = new QLabel(achievements);
        heart3_26->setObjectName("heart3_26");
        heart3_26->setGeometry(QRect(450, 350, 21, 21));
        heart3_26->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_26->setScaledContents(true);
        heart3_27 = new QLabel(achievements);
        heart3_27->setObjectName("heart3_27");
        heart3_27->setGeometry(QRect(420, 350, 21, 21));
        heart3_27->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_27->setScaledContents(true);
        heart3_28 = new QLabel(achievements);
        heart3_28->setObjectName("heart3_28");
        heart3_28->setGeometry(QRect(390, 350, 21, 21));
        heart3_28->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_28->setScaledContents(true);
        heart3_16 = new QLabel(achievements);
        heart3_16->setObjectName("heart3_16");
        heart3_16->setGeometry(QRect(390, 190, 21, 21));
        heart3_16->setPixmap(QPixmap(QString::fromUtf8("://full_star.png")));
        heart3_16->setScaledContents(true);
        heart3_29 = new QLabel(achievements);
        heart3_29->setObjectName("heart3_29");
        heart3_29->setGeometry(QRect(450, 150, 21, 21));
        heart3_29->setPixmap(QPixmap(QString::fromUtf8("://empty_star.png")));
        heart3_29->setScaledContents(true);
        lcdNumber_7 = new QLCDNumber(achievements);
        lcdNumber_7->setObjectName("lcdNumber_7");
        lcdNumber_7->setGeometry(QRect(590, 350, 64, 23));

        retranslateUi(achievements);
        QObject::connect(pushButton_4, &QPushButton::clicked, achievements, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(achievements);
    } // setupUi

    void retranslateUi(QDialog *achievements)
    {
        achievements->setWindowTitle(QCoreApplication::translate("achievements", "achievements", nullptr));
        label->setText(QCoreApplication::translate("achievements", "ACHIEVEMENTS", nullptr));
        pushButton_4->setText(QCoreApplication::translate("achievements", "<--", nullptr));
        label_2->setText(QCoreApplication::translate("achievements", "CHAPTER ONE", nullptr));
        label_3->setText(QCoreApplication::translate("achievements", "CHAPTER TWO", nullptr));
        label_4->setText(QCoreApplication::translate("achievements", "CHAPTER THREE", nullptr));
        label_5->setText(QCoreApplication::translate("achievements", "CHAPTER FOUR", nullptr));
        label_6->setText(QCoreApplication::translate("achievements", "CHAPTER FIVE", nullptr));
        label_7->setText(QCoreApplication::translate("achievements", "CHAPTER SIX", nullptr));
        label_8->setText(QCoreApplication::translate("achievements", "CHAPTER SEVEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class achievements: public Ui_achievements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHIEVEMENTS_H
