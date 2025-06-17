#ifndef STORY_WINDOW_H
#define STORY_WINDOW_H

#include <QDialog>
#include "window_zero.h"
#include "window_one.h"

class window_zero;
class window_one;
namespace Ui {
    class story_window;
}

class story_window : public QDialog
{
    Q_OBJECT

public:
    explicit story_window(QWidget *parent = nullptr);
    ~story_window();

    private slots:
        void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::story_window *ui;
    window_zero *btr00;
    window_one *ptr001;
};

#endif // STORY_WINDOW_H