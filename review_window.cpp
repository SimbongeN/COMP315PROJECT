#include "HeaderFiles/review_window.h"
#include "ui_review_window.h"
#include <fstream>

review_window::review_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::review_window)
{
    ui->setupUi(this);
    ptr000 = nullptr;
}

review_window::~review_window()
{
    delete ui;
    delete ptr000;
}

void review_window::on_pushButton_5_clicked()
{
    //read current score and update overral score
    //read points and initialize them
    int OverallPoint = 0;
    ifstream readPoints("C:/Users/Student/CLionProjects/untitled/GameDatabase/game_points.txt");
    if (readPoints.is_open()) {
        string line;
        while (getline(readPoints,line)) {
            OverallPoint = stoi(line);
        }
    }
    OverallPoint += points;

    //save chapter points
    ofstream save_points("C:/Users/Student/CLionProjects/untitled/GameDatabase/game_points.txt");
    if (save_points.is_open()) {
        save_points <<to_string(OverallPoint);
    }

    if (!ptr000) {
        ptr000 = new window_zero();
    }
    ptr000->show();
}

void review_window::display_results() {
    ui->lcdNumber_5->display(num_Of_questions_answered);
    ui->lcdNumber_4->display(num_correct_questions);
    ui->lcdNumber_3->display(num_incorrect_questions);
    ui->lcdNumber->display(points);
    ui->lcdNumber_2->display(accuaracy);
}
