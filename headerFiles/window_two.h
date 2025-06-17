#ifndef WINDOW_TWO_H
#define WINDOW_TWO_H
#include "window_one.h"
#include "window_three.h"
#include <QMainWindow>

class window_one;
class window_three;
class ChapterOne;
class ChapterTwo;

QT_BEGIN_NAMESPACE
namespace Ui {
    class window_two;
}
QT_END_NAMESPACE

class window_two : public QMainWindow
{
    Q_OBJECT

public:
    window_two(QWidget *parent = nullptr);
    ~window_two();
    void setcurrentCapter(int currentChapter) const;

    private slots:
        void on_pushButton_clicked();
        void on_pushButton_4_clicked();
        void on_pushButton_2_clicked();
        void on_pushButton_3_clicked();

private:
    Ui::window_two *ui;
    window_two *ptr22;
    window_three *ptr3;
    window_one *ptr1;

    //create pointer to each chapter
    ChapterOne* FirstChapter;
};

#endif // WINDOW_TWO_H