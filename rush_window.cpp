#include "HeaderFiles/rush_window.h"
#include "ui_rush_window.h"
#include "HeaderFiles/action_window.h"

action_window *wind;
rush_window::rush_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::rush_window)
{
    ui->setupUi(this);
    ptr00 = nullptr;

}

rush_window::~rush_window()
{
    delete ui;
    delete ptr00;
    delete ptr03;
}

void rush_window::on_pushButton_4_clicked()
{
    if (!ptr00) {
        ptr00 = new window_zero();
    }

    ptr00->show();
}


void rush_window::on_pushButton_5_clicked()
{
    ptr03 = new action_window();
    ptr03->readFiles();
    ptr03->display_question();
    ptr03->show();
}