#ifndef WINDOW_FOUR_H
#define WINDOW_FOUR_H

#include <QDialog>
#include "window_five.h"
#include "window_three.h"

class window_five;
class window_three;
class ChapterOne;

namespace Ui {
    class window_four;
}

class window_four : public QDialog
{
    Q_OBJECT

public:
    explicit window_four(QWidget *parent = nullptr);
    ~window_four();
    void setChapterTopic(const std::string &chapterTopic) const;
    void setTopiDescription(const std::string &chapterTopicDescription) const;
    void setFirstChapterPointer(ChapterOne* FirstChapter);

    private slots:
        void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::window_four *ui;
    window_five *ptr5;
    window_three *btr3;

    //chapter pointers
    ChapterOne* FirstChapter;
};

#endif // WINDOW_FOUR_H