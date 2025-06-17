#include "HeaderFiles/action_window.h"
#include "ui_action_window.h"
#include <QTimer>
#include <QMessageBox>
#include <fstream>
#include <iostream>

#include "HeaderFiles/Question.h"

action_window::action_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::action_window)
{
    double seconds = 30;
    ui->setupUi(this);
    ptr04 = new review_window();
    ui->lcdNumber_2->setDigitCount(2);
    ui->lcdNumber_2->display(seconds);
    on_lcdNumber_2_overflow();

}

action_window::~action_window()
{
    delete ui;
    delete ptr04;
}

void action_window::on_pushButton_5_clicked()
{
    check_answer();
    this->show();
}


void action_window::on_lcdNumber_2_overflow()
{
    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[=]() mutable{
        seconds--;
        ui->lcdNumber_2->display(seconds);
        if(seconds<=0){
            timer->stop();
            ptr04->points = points;
            ptr04->num_correct_questions = num_correct_questions;
            ptr04->num_incorrect_questions = num_incorrect_questions;
            ptr04->num_Of_questions_answered = num_Of_questions_answered;
            ptr04->accuaracy = (num_correct_questions*1.0/num_Of_questions_answered) *100;
            ptr04->display_results();
            ptr04->show();
            this->close();
        }
    });
    timer->start(1000);
}

void action_window::display_question() {
    Question currentQuestion = questions[currentIndexQuestion];

    //show question
    ui->textBrowser->setText(QString::fromStdString(currentQuestion.getQuestion()));

    //display question
    if (currentQuestion.getOptions().size() ==2) {
        //display true or false questions
        ui->radioButton_3->setVisible(false);
        ui->radioButton_4->setVisible(false);
        ui->radioButton->setText(QString::fromStdString(currentQuestion.getOptions()[0]));
        ui->radioButton_2->setText(QString::fromStdString(currentQuestion.getOptions()[1]));
    }
    if (currentQuestion.getOptions().size() >3 ) {
        ui->radioButton_3->setVisible(true);
        ui->radioButton_4->setVisible(true);
        ui->radioButton->setText(QString::fromStdString(currentQuestion.getOptions()[0]));
        ui->radioButton_2->setText(QString::fromStdString(currentQuestion.getOptions()[1]));
        ui->radioButton_3->setText(QString::fromStdString(currentQuestion.getOptions()[2]));
        ui->radioButton_4->setText(QString::fromStdString(currentQuestion.getOptions()[3]));
    }

    //set currentScore
    ui->lcdNumber->display(points);
}

string action_window::getAnswer() {
    string answer ;
    if (ui->radioButton->isChecked())
        answer =  "A";
    if (ui->radioButton_2->isChecked())
        answer =  "B";
    if (ui->radioButton_3->isChecked())
        answer =  "C";
    if (ui->radioButton_4->isChecked())
        answer = "D";
    return answer;
}


void action_window::check_answer() {
    string answer = getAnswer();
    if (answer == questions[currentIndexQuestion].getAnswer()) {
        points += 9;
        num_correct_questions++;
    }else {
        num_incorrect_questions++;
    }
    currentIndexQuestion++;
    num_Of_questions_answered++;
    display_question();
}

vector<string> splitString(string line, char diameter) {
    string currentToken = "";
    vector<string> listOfTokens;
    for (char c : line) {
        char currentLetter = c;
        if(currentLetter == diameter) {
            listOfTokens.push_back(currentToken);
            currentToken = "";
        } else {
            currentToken += currentLetter;
        }
    }
    listOfTokens.push_back(currentToken);
    return listOfTokens;
}

void action_window::readFiles() {
    ifstream file;
    string line2 ="";
    file.open("C:/Users/Student/CLionProjects/untitled/russain_ruolette_questions/questions.txt");
    if (file.is_open()) {
        while (getline(file,line2)) {
            vector<string> tokens2 = splitString(line2,'|');
            if (tokens2.size()<4)
                continue;
            const string& question = tokens2[0];
            vector<string> options = splitString(tokens2[1],';');
            const string& answer = tokens2[2];
            const string& hint = tokens2[3];
            bool selected = false;
            Question quest(question,options,answer,hint,selected);
            questions.push_back(quest);
        }
    }
    file.close();
    random_shuffle(questions.begin(),questions.end());
}
