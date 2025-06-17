#include "headerFiles/window_three.h"

#include <iostream>

#include "ui_window_three.h"
#include "headerFiles/window_four.h"
window_three::window_three(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_three)
{
    ui->setupUi(this);
    ptr4 = new window_four();
    btr2 = nullptr;
    btr1 = nullptr;

}

window_three::~window_three()
{
    delete ui;
    delete ptr4;
    delete btr2;
    delete btr1;
}

void window_three::on_pushButton_5_clicked()
{
    cout<<"in window 4"<<FirstChapter->getMap().size()<<" current question"<<FirstChapter->chosenScene.getTopic();
    //set FirstChapter to display window 4
     FirstChapter->window4 = ptr4;
     ptr4->setFirstChapterPointer(FirstChapter);
     FirstChapter->displayWindowFour();
     ptr4->show();

}

void window_three::on_pushButton_4_clicked()
{
    //check if resume btn was clicked and send user to scren one
    if (is_resumeBtnClicked) {
        btr1 = new window_one();
        btr1->show();
        return;
    }

    if (!btr2) {
        btr2 = new window_two();
    }

    btr2->show();
}
void window_three::setFirstChapterPointer(ChapterOne *FirstChapter) {
    this->FirstChapter = FirstChapter;
}

void window_three::setChapterLabel(const std::string &chapterNumber) const {
    std::string chapter = "WELCOME TO CHAPTER "+chapterNumber;
    ui->label->setText(QString::fromStdString(chapter));
}

void window_three::setIntroductionLabel(const std::string &chapterIntroduction) const {
    ui->textBrowser->setText(QString::fromStdString(chapterIntroduction));
}

