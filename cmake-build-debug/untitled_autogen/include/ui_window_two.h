/********************************************************************************
** Form generated from reading UI file 'window_two.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_TWO_H
#define UI_WINDOW_TWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_two
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QFrame *line_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *window_two)
    {
        if (window_two->objectName().isEmpty())
            window_two->setObjectName("window_two");
        window_two->resize(800, 450);
        window_two->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Student/CLionProjects/untitled/icons/blue_wallpaper.png);"));
        centralwidget = new QWidget(window_two);
        centralwidget->setObjectName("centralwidget");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 65, 261, 51));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(289, -10, 41, 501));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 201, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(189, 123, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 200, 121, 41));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 280, 91, 41));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 403, 41, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Algerian")});
        font2.setPointSize(20);
        font2.setBold(false);
        pushButton_4->setFont(font2);
        window_two->setCentralWidget(centralwidget);

        retranslateUi(window_two);
        QObject::connect(pushButton_4, &QPushButton::clicked, window_two, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton, &QPushButton::clicked, window_two, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_2, &QPushButton::clicked, window_two, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton_3, &QPushButton::clicked, window_two, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(window_two);
    } // setupUi

    void retranslateUi(QMainWindow *window_two)
    {
        window_two->setWindowTitle(QCoreApplication::translate("window_two", "window_two", nullptr));
        label->setText(QCoreApplication::translate("window_two", "DIFFICULTY", nullptr));
        pushButton->setText(QCoreApplication::translate("window_two", "EASY", nullptr));
        pushButton_2->setText(QCoreApplication::translate("window_two", "MEDIUM", nullptr));
        pushButton_3->setText(QCoreApplication::translate("window_two", "HARD", nullptr));
        pushButton_4->setText(QCoreApplication::translate("window_two", "<--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_two: public Ui_window_two {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_TWO_H
