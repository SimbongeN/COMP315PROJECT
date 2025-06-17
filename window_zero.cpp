#include "HeaderFiles/window_zero.h"
#include "ui_window_zero.h"

window_zero::window_zero(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_zero)
{
    ui->setupUi(this);
    ptr01 = new story_window();
    ptr02 = new rush_window();
}

window_zero::~window_zero()
{
    delete ui;
    delete ptr01;
    delete ptr02;
}

void window_zero::on_pushButton_clicked()
{
    ptr01->show();
}


void window_zero::on_pushButton_2_clicked()
{
    ptr02->show();
}