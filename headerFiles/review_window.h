#ifndef REVIEW_WINDOW_H
#define REVIEW_WINDOW_H

#include <QDialog>
#include "window_zero.h"

class window_zero;
namespace Ui {
    class review_window;
}

class review_window : public QDialog
{
    Q_OBJECT

public:
    explicit review_window(QWidget *parent = nullptr);
    ~review_window();
    int points = 0;
    int num_Of_questions_answered = 0;
    int num_correct_questions = 0;
    int num_incorrect_questions = 0;
    double accuaracy = 0;
    void display_results();

    private slots:
        void on_pushButton_5_clicked();

private:
    Ui::review_window *ui;
    window_zero *ptr000;
};
#endif // REVIEW_WINDOW_H