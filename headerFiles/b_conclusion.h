#ifndef B_CONCLUSION_H
#define B_CONCLUSION_H

#include <QDialog>

#include "ChapterOne.h"
#include "conclusion.h"

class conclusion;
class ChapterOne;
namespace Ui {
    class b_conclusion;
}

using namespace  std;
class b_conclusion : public QDialog
{
    Q_OBJECT

public:
    explicit b_conclusion(QWidget *parent = nullptr);
    ~b_conclusion();
    void setScreenLabel(string label);
    void setTextBroswerMessage(string message);
    void setFirstChapter(ChapterOne* FirstChapter);

    private slots:
        void on_pushButton_5_clicked();

private:
    Ui::b_conclusion *ui;
    conclusion *ptr600;

    //set pointer to chapter one object
    ChapterOne* FirstChapter;
};

#endif // B_CONCLUSION_H