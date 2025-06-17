#include "HeaderFiles/achievements.h"
#include "ui_achievements.h"

achievements::achievements(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::achievements)
{
    ui->setupUi(this);
    btr11 = nullptr;
}

achievements::~achievements()
{
    delete ui;
    delete btr11;
}

void achievements::on_pushButton_4_clicked()
{
    if (!btr11) {
        btr11 = new window_one();
    }

    btr11->show();
}

void achievements::display_chapterOne_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_5->setPixmap(full);
            ui->heart3_6->setPixmap(empty);
            ui->heart3_7->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_5->setPixmap(full);
            ui->heart3_6->setPixmap(full);
            ui->heart3_7->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_5->setPixmap(full);
            ui->heart3_6->setPixmap(full);
            ui->heart3_7->setPixmap(full);
        }
        ui->lcdNumber->display(points);
    }else {
        ui->heart3_5->setVisible(false);
        ui->heart3_6->setVisible(false);
        ui->heart3_7->setVisible(false);
        ui->lcdNumber->setVisible(false);
        ui->label_2->setVisible(false);
    }
}

void achievements::display_chapterTwo_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_8->setPixmap(full);
            ui->heart3_9->setPixmap(empty);
            ui->heart3_29->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_8->setPixmap(full);
            ui->heart3_9->setPixmap(full);
            ui->heart3_29->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_8->setPixmap(full);
            ui->heart3_9->setPixmap(full);
            ui->heart3_29->setPixmap(full);
        }
        ui->lcdNumber_2->display(points);
    }else {
        ui->heart3_8->setVisible(false);
        ui->heart3_9->setVisible(false);
        ui->heart3_29->setVisible(false);
        ui->lcdNumber_2->setVisible(false);
        ui->label_3->setVisible(false);
    }
}

void achievements::display_chapterThree_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_16->setPixmap(full);
            ui->heart3_15->setPixmap(empty);
            ui->heart3_14->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_16->setPixmap(full);
            ui->heart3_15->setPixmap(full);
            ui->heart3_14->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_16->setPixmap(full);
            ui->heart3_15->setPixmap(full);
            ui->heart3_14->setPixmap(full);
        }
        ui->lcdNumber_3->display(points);
    }else {
        ui->heart3_16->setVisible(false);
        ui->heart3_15->setVisible(false);
        ui->heart3_14->setVisible(false);
        ui->lcdNumber_3->setVisible(false);
        ui->label_4->setVisible(false);
    }
}

void achievements::display_chapterFour_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_19->setPixmap(full);
            ui->heart3_18->setPixmap(empty);
            ui->heart3_17->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_19->setPixmap(full);
            ui->heart3_18->setPixmap(full);
            ui->heart3_17->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_19->setPixmap(full);
            ui->heart3_18->setPixmap(full);
            ui->heart3_17->setPixmap(full);
        }

        ui->lcdNumber_4->display(points);
    }else {
        ui->heart3_19->setVisible(false);
        ui->heart3_18->setVisible(false);
        ui->heart3_17->setVisible(false);
        ui->lcdNumber_4->setVisible(false);
        ui->label_5->setVisible(false);
    }
}

void achievements::display_chapterFive_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_22->setPixmap(full);
            ui->heart3_21->setPixmap(empty);
            ui->heart3_20->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_22->setPixmap(full);
            ui->heart3_21->setPixmap(full);
            ui->heart3_20->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_22->setPixmap(full);
            ui->heart3_21->setPixmap(full);
            ui->heart3_20->setPixmap(full);
        }

        ui->lcdNumber_5->display(points);

    }else {
        ui->heart3_22->setVisible(false);
        ui->heart3_21->setVisible(false);
        ui->heart3_20->setVisible(false);
        ui->lcdNumber_5->setVisible(false);
        ui->label_6->setVisible(false);
    }
}

void achievements::display_chapterSix_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_25->setPixmap(full);
            ui->heart3_24->setPixmap(empty);
            ui->heart3_23->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_25->setPixmap(full);
            ui->heart3_24->setPixmap(full);
            ui->heart3_23->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_25->setPixmap(full);
            ui->heart3_24->setPixmap(full);
            ui->heart3_23->setPixmap(full);
        }
        ui->lcdNumber_6->display(points);
    }else {
        ui->heart3_25->setVisible(false);
        ui->heart3_24->setVisible(false);
        ui->heart3_23->setVisible(false);
        ui->lcdNumber_6->setVisible(false);
        ui->label_7->setVisible(false);
    }
}

void achievements::display_chapterSeven_stars(string complete,int points, bool completed) {
    //set all chapter one stars
    QPixmap full("C:/Users/Student/CLionProjects/untitled/icons/full_star.png");
    QPixmap empty("C:/Users/Student/CLionProjects/untitled/icons/empty_star.png");
    if (completed) {
        if (complete == "Bronze") {
            ui->heart3_28->setPixmap(full);
            ui->heart3_27->setPixmap(empty);
            ui->heart3_26->setPixmap(empty);

        }
        if (complete == "Silver") {
            ui->heart3_28->setPixmap(full);
            ui->heart3_27->setPixmap(full);
            ui->heart3_26->setPixmap(empty);

        }
        if (complete == "Gold"){
            ui->heart3_28->setPixmap(full);
            ui->heart3_27->setPixmap(full);
            ui->heart3_26->setPixmap(full);
        }
        ui->lcdNumber_7->display(points);
    }else {
        ui->heart3_28->setVisible(false);
        ui->heart3_27->setVisible(false);
        ui->heart3_26->setVisible(false);
        ui->lcdNumber_7->setVisible(false);
        ui->label_8->setVisible(false);
    }
}
