#ifndef WINDOW_ZERO_H
#define WINDOW_ZERO_H

#include <QDialog>
#include "story_window.h"
#include "rush_window.h"

class rush_window;
class story_window;
namespace Ui {
    class window_zero;
}

class window_zero : public QDialog
{
    Q_OBJECT

public:
    explicit window_zero(QWidget *parent = nullptr);
    ~window_zero();

    private slots:
        void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::window_zero *ui;
    story_window *ptr01;
    rush_window *ptr02;

};

#endif // WINDOW_ZERO_H