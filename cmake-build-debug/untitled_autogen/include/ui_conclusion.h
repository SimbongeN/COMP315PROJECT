/********************************************************************************
** Form generated from reading UI file 'conclusion.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONCLUSION_H
#define UI_CONCLUSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_conclusion
{
public:
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_4;
    QFrame *line_3;
    QLCDNumber *lcdNumber_5;

    void setupUi(QDialog *conclusion)
    {
        if (conclusion->objectName().isEmpty())
            conclusion->setObjectName("conclusion");
        conclusion->resize(871, 467);
        conclusion->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        lcdNumber = new QLCDNumber(conclusion);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(510, 180, 71, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font.setPointSize(10);
        font.setBold(true);
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(conclusion);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 120, 201, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_3->setFont(font1);
        label = new QLabel(conclusion);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 30, 471, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_5 = new QPushButton(conclusion);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(780, 400, 41, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Algerian")});
        font3.setPointSize(20);
        font3.setBold(false);
        pushButton_5->setFont(font3);
        label_4 = new QLabel(conclusion);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 170, 141, 41));
        label_4->setFont(font1);
        line = new QFrame(conclusion);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 70, 541, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(conclusion);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(200, 70, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(conclusion);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(620, 370, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(conclusion);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(160, 370, 541, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        lcdNumber_5 = new QLCDNumber(conclusion);
        lcdNumber_5->setObjectName("lcdNumber_5");
        lcdNumber_5->setGeometry(QRect(510, 130, 71, 21));
        lcdNumber_5->setFont(font);
        lcdNumber_5->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(conclusion);
        QObject::connect(pushButton_5, &QPushButton::clicked, conclusion, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(conclusion);
    } // setupUi

    void retranslateUi(QDialog *conclusion)
    {
        conclusion->setWindowTitle(QCoreApplication::translate("conclusion", "conclusion", nullptr));
        label_3->setText(QCoreApplication::translate("conclusion", "QUESTIONS ATTEMPTED:", nullptr));
        label->setText(QCoreApplication::translate("conclusion", "CHAPTER REVIEW", nullptr));
        pushButton_5->setText(QCoreApplication::translate("conclusion", "-->", nullptr));
        label_4->setText(QCoreApplication::translate("conclusion", "POINTS EARNED:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class conclusion: public Ui_conclusion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONCLUSION_H
