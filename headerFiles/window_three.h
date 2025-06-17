#ifndef WINDOW_THREE_H
#define WINDOW_THREE_H

#include <QDialog>

#include "ChapterOne.h"
#include "window_four.h"
#include "window_two.h"

class window_four;
class window_two;
class window_one;
class ChapterOne;

namespace Ui {
    class window_three;
}

class window_three : public QDialog
{
    Q_OBJECT

public:
    bool is_resumeBtnClicked = false;
    explicit window_three(QWidget *parent = nullptr);
    ~window_three();
    void setChapterLabel(const std::string &chapterNumber) const;
    void setIntroductionLabel(const std::string &chapterIntroduction) const;
    void setFirstChapterPointer(ChapterOne* FirstChapter);

    private slots:
        void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::window_three *ui;
    window_four *ptr4;
    window_two *btr2;
    window_one *btr1;

    //chapter pointers
    ChapterOne* FirstChapter;
};

#endif // WINDOW_THREE_H