/********************************************************************************
** Form generated from reading UI file 'b_conclusion.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B_CONCLUSION_H
#define UI_B_CONCLUSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_b_conclusion
{
public:
    QFrame *line;
    QFrame *line_3;
    QLabel *label;
    QPushButton *pushButton_5;
    QFrame *line_2;
    QFrame *line_4;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *b_conclusion)
    {
        if (b_conclusion->objectName().isEmpty())
            b_conclusion->setObjectName("b_conclusion");
        b_conclusion->resize(870, 477);
        b_conclusion->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        line = new QFrame(b_conclusion);
        line->setObjectName("line");
        line->setGeometry(QRect(140, 50, 541, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(b_conclusion);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(160, 380, 541, 41));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(b_conclusion);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 751, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_5 = new QPushButton(b_conclusion);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(760, 420, 41, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Algerian")});
        font1.setPointSize(20);
        font1.setBold(false);
        pushButton_5->setFont(font1);
        line_2 = new QFrame(b_conclusion);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(160, 50, 41, 41));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(b_conclusion);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(640, 380, 41, 41));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        textBrowser = new QTextBrowser(b_conclusion);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(210, 100, 421, 271));
        QFont font2;
        font2.setPointSize(14);
        textBrowser->setFont(font2);

        retranslateUi(b_conclusion);
        QObject::connect(pushButton_5, &QPushButton::clicked, b_conclusion, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(b_conclusion);
    } // setupUi

    void retranslateUi(QDialog *b_conclusion)
    {
        b_conclusion->setWindowTitle(QCoreApplication::translate("b_conclusion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("b_conclusion", "DOOMSDAY", nullptr));
        pushButton_5->setText(QCoreApplication::translate("b_conclusion", "-->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class b_conclusion: public Ui_b_conclusion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B_CONCLUSION_H
