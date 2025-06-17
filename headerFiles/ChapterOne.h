//
// Created by ZAMA on 4/6/2025.
//

#ifndef CHAPTERONE_H
#define CHAPTERONE_H
#include <vector>
#include "Scenario.h"
#include "Question.h"
#include <unordered_map>
#include <string>
#include "window_three.h"
#include "window_four.h"
#include "window_five.h"


using namespace std;
class window_three;
class window_four;
class window_five;
class b_conclusion;
class conclusion;

class ChapterOne {
    private:
    unordered_map<Scenario,vector<Question>> maps;

    vector<Question> SceneQuestions;
    int currentIndexQuestion = 0;
    int lives = 3;


    public:
        Scenario chosenScene;
        window_three* window3;
        window_four* window4;
        window_five* window5;
        b_conclusion* window6;
        conclusion* window7;
        bool isFinished;
        int currentChapter;
        string Difficulty_level;
        int chapterPoints = 0;
        int OverallPoint = 0;
        int QuestionPoint = 9;
        bool is_current_chapter_bought = false;

        ChapterOne(const string &FileName);
        ~ChapterOne();

        bool getIsFinished();
        void setMapScenarios(string difficulty_level);
        void ChangeChapter(string FileName);
        void readFile(const string& FileName);
        unordered_map<Scenario,vector<Question>> getMap();
        vector<string> splitString(string line, char diameter);
        void setWindowThree(window_three* window3);
        void setWindowFour(window_four* window4);
        void setWindowFive(window_five* window5);
        void displayWindowThree() const;
        void displayWindowFour();
        void displayWindowFive();
        void displayWindow_b_conclusion(bool isFailed);
        void resetLives();
        void displayResult();
        int getLives() const;
        bool buy_question_status();
        bool setCurrentIndexQuestion(int index);
        int getCurrentIndexQuestion() const;
        void saveGameState();


};



#endif //CHAPTERONE_H
