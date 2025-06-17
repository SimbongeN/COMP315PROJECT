#include "HeaderFiles/window_one.h"
#include <fstream>
#include <iostream>
#include "ui_window_one.h"
#include "headerFiles/story_window.h"
#include "headerFiles/window_two.h"
#include "HeaderFiles/achievements.h"

using namespace std;

struct completedChapters {
    int chapter_num{};
    string completeType;
    int points{};
};

window_one::window_one(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_one)
{
    ui->setupUi(this);
    ptr22 = new window_two();
    ptr33 = new window_three();
    FirstChapter = new ChapterOne("ChapterOne/Scenarios1.txt");
}

window_one::~window_one()
{
    delete ui;
    delete ptr22;
    delete ptr33;
    delete ptr11;
    delete FirstChapter;
    delete ptr0;

}

vector<string> split(const string &str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(str);
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

void window_one::on_pushButton_5_clicked() {
    ptr0 = new story_window();
    ptr0->show();
}

//resume btn
void window_one::on_pushButton_clicked()
{
    int currentChapter = 1;
    string Difficulty_level;
    ifstream readSavedChapter;
    readSavedChapter.open("C:/Users/Student/CLionProjects/untitled/GameDatabase/SaveCurrentChapter.txt");

    if (readSavedChapter.is_open()) {
        string str="";
        string line ="";
        while (getline(readSavedChapter,line)) {
            vector<string> tokens = split(line, '|');
            if (tokens.size()==2) {
                currentChapter = stoi(tokens[0]);
                Difficulty_level = tokens[1];
            }
        }
    }
    readSavedChapter.close();

    setcurrentCapter(currentChapter);
    FirstChapter->window3 = ptr33;
    FirstChapter->setMapScenarios(Difficulty_level);
    ptr33->setFirstChapterPointer(FirstChapter);
    ptr33->is_resumeBtnClicked=true;
    FirstChapter->displayWindowThree();
    ptr33->show();
}

//new game btn
void window_one::on_pushButton_2_clicked()
{
    ptr22->setcurrentCapter(1);
    ptr22->show();
}

void window_one::setcurrentCapter(int currentChapter) const {
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
            FirstChapter->ChangeChapter("ChapterOne/Scenarios1.txt");

    FirstChapter->currentChapter = currentChapter;
}


void window_one::on_pushButton_3_clicked() {
    ptr11 = new achievements();

    //reading completed chapters txt file+
    ifstream file;
    file.open("C:/Users/Student/CLionProjects/untitled/GameDatabase/completed_chapters.txt");
    vector<completedChapters> chapters;
    string line="";
    while (getline(file,line)) {
        vector<string> tokens = split(line,'|');
        if (tokens.size() <3) continue;

        int chapterNum = std::stoi (tokens[0]);
        string completeType = tokens[1];
        int point = std::stoi(tokens[2]);

         completedChapters n;
        n.chapter_num= chapterNum;
        n.completeType = completeType;
        n.points = point;
        chapters.push_back(n);
    }
    file.close();

    cout<<chapters.size();
    // loading all the complted chapters in achievement window
    bool chapter1 = false;
    bool chapter2 = false;
    bool chapter3 = false;
    bool chapter4 = false;
    bool chapter5 = false;
    bool chapter6 = false;
    bool chapter7 = false;
    for (completedChapters obj : chapters) {
        if (obj.chapter_num==1) {
            ptr11->display_chapterOne_stars(obj.completeType,obj.points,true);
            chapter1 = true;
        }

        if (obj.chapter_num==2) {
            ptr11->display_chapterTwo_stars(obj.completeType,obj.points,true);
            chapter2 = true;
        }

        if (obj.chapter_num==3) {
            ptr11->display_chapterThree_stars(obj.completeType,obj.points,true);
            chapter3 = true;
        }

        if (obj.chapter_num==4) {
            ptr11->display_chapterFour_stars(obj.completeType,obj.points,true);
            chapter4 = true;
        }

        if (obj.chapter_num==5) {
            ptr11->display_chapterFive_stars(obj.completeType,obj.points,true);
            chapter5 = true;
        }
         if (obj.chapter_num==6) {
            ptr11->display_chapterSix_stars(obj.completeType,obj.points,true);
             chapter6 = true;
        }

        if (obj.chapter_num==7) {
            ptr11->display_chapterSeven_stars(obj.completeType,obj.points,true);
            chapter7 = true;
        }
    }
    if (!chapter1)
        ptr11->display_chapterOne_stars("",0,false);

    if (!chapter2)
        ptr11->display_chapterTwo_stars("",0,false);

    if (!chapter3)
        ptr11->display_chapterThree_stars("",0,false);

    if (!chapter4)
        ptr11->display_chapterFour_stars("",0,false);

    if (!chapter5)
        ptr11->display_chapterFive_stars("",0,false);

    if(!chapter6)
        ptr11->display_chapterSix_stars("",0,false);

    if (!chapter7)
        ptr11->display_chapterSeven_stars("",0,false);

    ptr11->show();
}
