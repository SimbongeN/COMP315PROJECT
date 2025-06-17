#include "HeaderFiles/story_window.h"
#include "ui_story_window.h"

story_window::story_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::story_window)
{
    ui->setupUi(this);
    btr00 = nullptr;
    ptr001 = new window_one();
}

story_window::~story_window()
{
    delete ui;
    delete btr00;
    delete ptr001;
}

void story_window::on_pushButton_4_clicked()
{
    btr00 = new window_zero();
    btr00->show();
}


void story_window::on_pushButton_5_clicked()
{
    ptr001->show();
}