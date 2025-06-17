#ifndef CONCLUSION_H
#define CONCLUSION_H

#include <QDialog>

#include "ChapterOne.h"

namespace Ui {
    class conclusion;
}

class ChapterOne;
class window_three;
class window_one;

class conclusion : public QDialog
{
    Q_OBJECT

public:
    explicit conclusion(QWidget *parent = nullptr);
    ~conclusion();
    void setQuestionsCompleted(int numberOfQuestions);
    void setPointsEarned(int pointsEarned);
    void setFirstChapter(ChapterOne* FirstChapter);

    private slots:
        void on_pushButton_5_clicked();


private:
    Ui::conclusion *ui;
    window_three* three;
    window_one* one;

    //pointer chapter one
    ChapterOne* FirstChapter;
};

#endif // CONCLUSION_H