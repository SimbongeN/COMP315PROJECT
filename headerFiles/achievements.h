#ifndef ACHIEVEMENTS_H
#define ACHIEVEMENTS_H

#include <QDialog>
#include "window_one.h"

class window_one;
namespace Ui {
    class achievements;
}

using namespace std;

class achievements : public QDialog
{
    Q_OBJECT

public:
    explicit achievements(QWidget *parent = nullptr);
    ~achievements();

    //the below methods are for display or not display stars for completed chapters
    void display_chapterOne_stars(string complete,int points,bool completed);
    void display_chapterTwo_stars(string complete,int points,bool completed);
    void display_chapterThree_stars(string complete,int points,bool completed);
    void display_chapterFour_stars(string complete,int points,bool completed);
    void display_chapterFive_stars(string complete,int points,bool completed);
    void display_chapterSix_stars(string complete,int points,bool completed);
    void display_chapterSeven_stars(string complete,int points,bool completed);


    private slots:
        void on_pushButton_4_clicked();

private:
    Ui::achievements *ui;
    window_one *btr11;
};

#endif // ACHIEVEMENTS_H