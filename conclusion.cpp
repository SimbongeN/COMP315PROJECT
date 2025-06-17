#include "HeaderFiles/conclusion.h"
#include "ui_conclusion.h"

conclusion::conclusion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::conclusion)
{
    ui->setupUi(this);
}
conclusion::~conclusion()
{
    delete ui;
}

void conclusion::setQuestionsCompleted(int numberOfQuestions) {
    ui->lcdNumber_5->display(numberOfQuestions);
}

void conclusion::setFirstChapter(ChapterOne *FirstChapter) {
    this->FirstChapter=FirstChapter;
}
void conclusion::setPointsEarned(int pointsEarned) {
    ui->lcdNumber->display(pointsEarned);
}

void conclusion::on_pushButton_5_clicked() {
    //set chapter point to zero
    FirstChapter->chapterPoints = 0;
    FirstChapter->resetLives();
    FirstChapter->setCurrentIndexQuestion(0);

    //check if player hasn't finished their lives and restart the chapter
    if (FirstChapter->currentChapter < 7) {
        three = new window_three();
        three->setFirstChapterPointer(FirstChapter);
        FirstChapter->window3 = three;
        FirstChapter->displayWindowThree();
        three->show();
        return;
    }
    one = new window_one();
    one->show();
}


