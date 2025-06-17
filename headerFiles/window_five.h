#ifndef WINDOW_FIVE_H
#define WINDOW_FIVE_H

#include <QDialog>
#include <ui_window_three.h>
#include "b_conclusion.h"
#include "window_three.h"

namespace Ui {
    class window_five;
}

class ChapterOne;
class window_three;
class b_conclusion;

class window_five : public QDialog
{
    Q_OBJECT

public:
    int currentHealth;
    int score;
    explicit window_five(QWidget *parent = nullptr);
    ~window_five();
    void setQuestionNumber(const std::string &QuestionNumber) const;
    void setQuestion(const std::string &Question) const;
    void setScoreLabel(int currentScore) const;
    void setRadioBtn1(const std::string &Question) const;
    void setRadioBtn2(const std::string &Question) const;
    void setRadioBtn3(const std::string &Question) const;
    void setRadioBtn4(const std::string &Question) const;
    void trueOrFalseQuestions(const std::string &QuestionOne, const std::string &QuestionTwo) const;
    std::string getSelectedRadio() const;
    void displayResult(const std::string &result, const std::string &title);
    void setHealth(int health); // 0 to 3
    void on_lcdNumber_overflow(int points) const;
    void setFirstChapterPointer(ChapterOne* FirstChapter);

    private slots:
        void on_pushButton_5_clicked();
        void on_pushButton_6_clicked();

private:
    Ui::window_five *ui;
    window_five* ptr50;
    b_conclusion* ptr3;
    int* currentChapter;

    //chapter pointers
    ChapterOne* FirstChapter;

};

#endif // WINDOW_FIVE_H