#ifndef WINDOW_ONE_H
#define WINDOW_ONE_H

#include <QDialog>
#include "window_two.h"

class window_two;
class window_three;
class ChapterOne;
class achievements;
class story_window;

namespace Ui {
    class window_one;
}

class window_one : public QDialog
{
    Q_OBJECT

public:
    explicit window_one(QWidget *parent = nullptr);
    ~window_one() override;
    void  setcurrentCapter(int currentChapter) const;

    private slots:
        void on_pushButton_2_clicked();
        void on_pushButton_clicked();
        void on_pushButton_3_clicked();
        void on_pushButton_5_clicked();

private:
    Ui::window_one *ui;
    window_two * ptr22;
    window_three* ptr33;
    achievements* ptr11;
    story_window* ptr0;

    ChapterOne* FirstChapter;

};

#endif // WINDOW_ONE_H
