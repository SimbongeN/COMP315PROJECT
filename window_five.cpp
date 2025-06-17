#include "headerFiles/window_five.h"
#include "ui_window_five.h"
#include <QMessageBox>
#include <fstream>
#include <iostream>

#include "headerFiles/ChapterOne.h"

using namespace std;

window_five::window_five(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_five)
{
    ui->setupUi(this);
    ptr50 = nullptr;
}

window_five::~window_five()
{
    delete ui;
    delete ptr50;
    delete ptr3;
}

void window_five::on_pushButton_5_clicked()
{
    //display result of question
    FirstChapter->displayResult();

    //check if player hasn't finished their lives and restart the chapter
    if (FirstChapter->getLives() == 0) {
        ptr3 = new b_conclusion();
        ptr3->setFirstChapter(FirstChapter);
        FirstChapter->window6 = ptr3;
        FirstChapter->displayWindow_b_conclusion(true);
        ptr3->show();
        return;
    }

    //check if the current chapter is finished to move the player to the next chapter
    if (FirstChapter->getIsFinished()) {
        FirstChapter->saveGameState();
        //save current chapter
        ofstream SaveGame("C:/Users/Student/CLionProjects/untitled/GameDatabase/SaveCurrentChapter.txt");

        if (SaveGame.is_open()) {
            SaveGame <<to_string(FirstChapter->currentChapter)+"|"+FirstChapter->chosenScene.getDifficulty_level()<<endl;
        }
        SaveGame.close();

        // set which chapter we are currently doing and enable everything back to defualt
        int currentChapter = FirstChapter->currentChapter;
        if (currentChapter == 1)
            FirstChapter->ChangeChapter("ChapterOne/Scenarios1.txt");
        if (currentChapter == 2)
            FirstChapter->ChangeChapter("ChapterTwo/Scenarios.txt");

        if (currentChapter == 3)
            FirstChapter->ChangeChapter("ChapterThree/Chapter#3_Scenarios.txt");

        if (currentChapter == 4)
            FirstChapter->ChangeChapter("ScenariosQuest4/scenarios.txt");

        if (currentChapter == 5)
            FirstChapter->ChangeChapter("QuestionsFive/Scenarios5.txt");

        if (currentChapter == 6)
            FirstChapter->ChangeChapter("Question_ScenariosSix/Chapter6_Scenarios.txt");

        if (currentChapter == 7)
            //fix chapter seven
            FirstChapter->ChangeChapter("ChapterOne/Scenarios1.txt");

        FirstChapter->is_current_chapter_bought = false;
        ptr3 = new b_conclusion();
        ptr3->setFirstChapter(FirstChapter);
        FirstChapter->window6 = ptr3;
        FirstChapter->displayWindow_b_conclusion(false);
        ptr3->show();
        return;

    }

    // move player to next question by creating window five it
    if (!ptr50) {
        ptr50 = new window_five();
        FirstChapter->window5 = ptr50;
        ptr50->setFirstChapterPointer(FirstChapter);
        FirstChapter->displayWindowFive();
        ptr50->show();
        return;

    }

    //move player to next question if ptr50 exist
    FirstChapter->window5 = ptr50;
    ptr50->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowFive();
    ptr50->show();
}

//move the current question variable to the next question making the user skip the question
//no points are earned here and user doesn't earn any points
void window_five::on_pushButton_6_clicked() {
    bool purchase_result = FirstChapter->buy_question_status();
    if (!purchase_result) {
        FirstChapter->window5->displayResult("Not enough points","Purchase Failed");
        // display the current question the user is on and make ptr50 if doesnt exist
        if (!ptr50) {
            ptr50 = new window_five();
            FirstChapter->window5 = ptr50;
            ptr50->setFirstChapterPointer(FirstChapter);
            FirstChapter->displayWindowFive();
            ptr50->show();
            return;

        }

        // display the current question the user is on and make ptr50 if does exist
        FirstChapter->window5 = ptr50;
        ptr50->setFirstChapterPointer(FirstChapter);
        FirstChapter->displayWindowFive();
        ptr50->show();
        return;
    }
    FirstChapter->window5->displayResult("Question skipped","Purchase successful");
    //move the current question variable to the next question making the user skip the question
    int currentIndexQuestion = FirstChapter->getCurrentIndexQuestion();
    currentIndexQuestion++; //move current index to next question
    FirstChapter->setCurrentIndexQuestion(currentIndexQuestion);
    FirstChapter->resetLives();

    // move player to next question by creating window five it
    if (!ptr50) {
        ptr50 = new window_five();
        FirstChapter->window5 = ptr50;
        ptr50->setFirstChapterPointer(FirstChapter);
        FirstChapter->displayWindowFive();
        ptr50->show();
        return;

    }

    //move player to next question if ptr50 exist
    FirstChapter->window5 = ptr50;
    ptr50->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowFive();
    ptr50->show();

}


void window_five::setFirstChapterPointer(ChapterOne *FirstChapter) {
    this->FirstChapter = FirstChapter;
}


void window_five::setHealth(int health)
{
    if (health < 0) health = 0;
    if (health > 3) health = 3;
    currentHealth = health;

    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_heart.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_heart.png");

    ui->heart1->setPixmap(health >= 1 ? full : empty);
    ui->heart2->setPixmap(health >= 2 ? full : empty);
    ui->heart3->setPixmap(health == 3 ? full : empty);
}

void window_five::on_lcdNumber_overflow(int points) const {
    ui->lcdNumber->display(points);
}

void window_five::setQuestion(const std::string &Question) const {
    ui->textBrowser->setText(QString::fromStdString(Question));
}
void window_five::setQuestionNumber(const std::string &QuestionNumber) const {
    ui->label_2->setText(QString::fromStdString(QuestionNumber));
}

void window_five::setScoreLabel(int currentScore) const {
    ui->lcdNumber->setDigitCount(currentScore);
}

void window_five::setRadioBtn1(const std::string &Question) const {
    ui->radioButton->setText(QString::fromStdString(Question));
}

void window_five::setRadioBtn2(const std::string &Question) const {
    ui->radioButton_2->setText(QString::fromStdString(Question));
}

void window_five::setRadioBtn3(const std::string &Question) const {
    ui->radioButton_3->setText(QString::fromStdString(Question));
}

void window_five::setRadioBtn4(const std::string &Question) const {
    ui->radioButton_4->setText(QString::fromStdString(Question));
}

void window_five::trueOrFalseQuestions(const std::string &QuestionOne, const std::string &QuestionTwo) const {
    ui->radioButton->setText(QString::fromStdString(QuestionOne));
    ui->radioButton_2->setText(QString::fromStdString(QuestionTwo));
    ui->radioButton_3->setVisible(false);
    ui->radioButton_4->setVisible(false);
}

std::string window_five::getSelectedRadio() const {
    bool A = ui->radioButton->isChecked();
    bool B = ui->radioButton_2->isChecked();
    bool C = ui->radioButton_3->isChecked();
    bool D = ui->radioButton_4->isChecked();

    if (A)
        return "A";

    if (B)
        return "B";

    if (C)
        return "C";
    if (D)
        return "D";
    return "None";
}

void window_five::displayResult(const std::string &result, const std::string &title) {
    QMessageBox::information(this,QString::fromStdString(title),QString::fromStdString(result));
}
