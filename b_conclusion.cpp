#include "HeaderFiles/b_conclusion.h"
#include "ui_b_conclusion.h"

b_conclusion::b_conclusion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_conclusion)
{
    ui->setupUi(this);
    ptr600 = new conclusion();
}

b_conclusion::~b_conclusion()
{
    delete ui;
    delete ptr600;
}
void b_conclusion::setScreenLabel(string label) {
    ui->label->setText(QString::fromStdString(label));
}

void b_conclusion::setTextBroswerMessage(string message) {
    ui->textBrowser->setText(QString::fromStdString(message));
}

void b_conclusion::setFirstChapter(ChapterOne *FirstChapter) {
    this->FirstChapter=FirstChapter;
}


void b_conclusion::on_pushButton_5_clicked()
{
    ptr600->setFirstChapter(FirstChapter);
    ptr600->setPointsEarned(FirstChapter->chapterPoints);
    ptr600->setQuestionsCompleted(FirstChapter->getCurrentIndexQuestion()+1);
    ptr600->show();
}