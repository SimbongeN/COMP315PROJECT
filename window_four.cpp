#include "headerFiles/window_four.h"
#include "ui_window_four.h"
#include "headerFiles/window_three.h"

window_four::window_four(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_four)
{
    ui->setupUi(this);
    ptr5 = new window_five();
    btr3 = nullptr;
}

window_four::~window_four()
{
    delete ui;
    delete ptr5;
    delete btr3;
}

void window_four::on_pushButton_5_clicked()
{
    FirstChapter->window5 = ptr5;
    ptr5->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowFive();
    ptr5->show();
}


void window_four::on_pushButton_4_clicked()
{
    if (!btr3) {
        btr3 = new window_three();
    }
    FirstChapter->window3 = btr3;
    btr3->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowThree();
    btr3->show();
}

void window_four::setChapterTopic(const std::string &chapterTopic) const {
    ui->label->setText(QString::fromStdString(chapterTopic));
}

void window_four::setTopiDescription(const std::string &chapterTopicDescription) const {
    ui->textBrowser->setText(QString::fromStdString(chapterTopicDescription));
}

void window_four::setFirstChapterPointer(ChapterOne *FirstChapter) {
    this->FirstChapter = FirstChapter;
}


