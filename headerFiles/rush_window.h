#ifndef RUSH_WINDOW_H
#define RUSH_WINDOW_H

#include <QDialog>
#include "window_zero.h"
#include "action_window.h"

class action_window;
class window_zero;
namespace Ui {
    class rush_window;
}

class rush_window : public QDialog
{
    Q_OBJECT

public:
    explicit rush_window(QWidget *parent = nullptr);
    ~rush_window();

    private slots:
        void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::rush_window *ui;
    window_zero *ptr00;
    action_window *ptr03;
};

#endif // RUSH_WINDOW_H