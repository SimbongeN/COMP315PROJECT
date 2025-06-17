#include "headerFiles/window_two.h"
#include "ui_window_two.h"
#include "headerFiles/ChapterOne.h"
#include "headerFiles/window_three.h"
#include "headerFiles/window_one.h"

window_two::window_two(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::window_two)
{
    ui->setupUi(this);
    FirstChapter = new ChapterOne("ChapterOne/Scenarios1.txt");
    ptr1 = nullptr;
}

window_two::~window_two()
{
    delete ui;
    delete ptr3;
    delete ptr1;
    delete FirstChapter;
}

//easy btn
void window_two::on_pushButton_clicked()
{
    ptr3 = new window_three();
    // set all variables for the current chapter including setting the difficulty
    FirstChapter->window3 = ptr3;
    FirstChapter->setMapScenarios("easy");
    ptr3->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowThree();
    ptr3->show();
}

//medium btn
void window_two::on_pushButton_2_clicked() {

    ptr3 = new window_three();
    //load medium questions
    FirstChapter->window3 = ptr3;
    FirstChapter->setMapScenarios("medium");
    ptr3->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowThree();
    ptr3->show();
}

void window_two::on_pushButton_3_clicked() {
    ptr3 = new window_three();
    FirstChapter->window3 = ptr3;
    FirstChapter->setMapScenarios("hard");
    ptr3->setFirstChapterPointer(FirstChapter);
    FirstChapter->displayWindowThree();
    ptr3->show();
}

void window_two::on_pushButton_4_clicked()
{
    if (!ptr1) {
        ptr1 = new window_one();
    }
    ptr1->show();
}

void window_two::setcurrentCapter(int currentChapter) const {
     // set which chapter we are currently doing
     if (currentChapter == 1) {
         FirstChapter->ChangeChapter("ChapterOne/Scenarios1.txt");
         FirstChapter->currentChapter = currentChapter;
         return;
     }

     if (currentChapter == 2) {
         FirstChapter->ChangeChapter("ChapterTwo/Scenarios.txt");
         FirstChapter->currentChapter = currentChapter;
         return;
     }

     if (currentChapter == 3) {
         FirstChapter->ChangeChapter("ChapterThree/Chapter#3_Scenarios.txt");
         FirstChapter->currentChapter = currentChapter;
         return;
     }


     if (currentChapter == 4) {
         FirstChapter->ChangeChapter("ScenariosQuest4/scenarios.txt");
         FirstChapter->currentChapter = currentChapter;
         return;
     }


     if (currentChapter == 5) {
         FirstChapter ->ChangeChapter("QuestionsFive/Scenarios5.txt");
         FirstChapter->currentChapter = currentChapter;
         return;
     }


     if (currentChapter == 6)
         FirstChapter->ChangeChapter("Question_ScenariosSix/Chapter6_Scenarios.txt");
     else
         //fix chapter seven
         FirstChapter->ChangeChapter("Scenarios_question_seven/Chapter7_Scenario.txt");

     FirstChapter->currentChapter = currentChapter;
}
