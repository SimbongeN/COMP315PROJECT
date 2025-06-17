/********************************************************************************
** Form generated from reading UI file 'window_one.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ONE_H
#define UI_WINDOW_ONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_window_one
{
public:
    QFrame *line_2;
    QFrame *line;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *window_one)
    {
        if (window_one->objectName().isEmpty())
            window_one->setObjectName("window_one");
        window_one->resize(800, 450);
        window_one->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        line_2 = new QFrame(window_one);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(290, -20, 41, 501));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(window_one);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 70, 261, 41));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(window_one);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(window_one);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 130, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(window_one);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 210, 91, 41));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(window_one);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 290, 231, 41));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(window_one);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 370, 91, 41));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(window_one);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 410, 41, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Algerian")});
        font2.setPointSize(20);
        font2.setBold(false);
        pushButton_5->setFont(font2);

        retranslateUi(window_one);
        QObject::connect(pushButton, &QPushButton::clicked, window_one, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, window_one, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_3, &QPushButton::clicked, window_one, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_4, &QPushButton::clicked, window_one, qOverload<>(&QDialog::close));
        QObject::connect(pushButton_5, &QPushButton::clicked, window_one, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(window_one);
    } // setupUi

    void retranslateUi(QDialog *window_one)
    {
        window_one->setWindowTitle(QCoreApplication::translate("window_one", "window_one", nullptr));
        label->setText(QCoreApplication::translate("window_one", "QUIZ", nullptr));
        pushButton->setText(QCoreApplication::translate("window_one", "RESUME", nullptr));
        pushButton_2->setText(QCoreApplication::translate("window_one", "NEW", nullptr));
        pushButton_3->setText(QCoreApplication::translate("window_one", "ACHIEVEMENTS", nullptr));
        pushButton_4->setText(QCoreApplication::translate("window_one", "QUIT", nullptr));
        pushButton_5->setText(QCoreApplication::translate("window_one", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_one: public Ui_window_one {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ONE_H
