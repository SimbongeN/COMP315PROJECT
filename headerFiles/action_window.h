#ifndef ACTION_WINDOW_H
#define ACTION_WINDOW_H

#include <QDialog>
#include "review_window.h"

class review_window;
class Question;

using namespace std;

namespace Ui {
    class action_window;
}

class action_window : public QDialog
{
    Q_OBJECT
private:
    int points = 0;
    int num_Of_questions_answered = 0;
    int num_correct_questions = 0;
    int num_incorrect_questions = 0;
    int currentIndexQuestion = 0;
    vector<Question> questions;

public:
    double seconds = 30;
    explicit action_window(QWidget *parent = nullptr);
    ~action_window();
    void display_question();
    void check_answer();
    void readFiles();
    string getAnswer();



    private slots:
        void on_pushButton_5_clicked();

    void on_lcdNumber_2_overflow();

private:
    Ui::action_window *ui;
    review_window *ptr04;
};

#endif // ACTION_WINDOW_H