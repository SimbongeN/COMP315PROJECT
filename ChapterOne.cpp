#include "headerFiles/ChapterOne.h"
#include <fstream>
#include "headerFiles/Question.h"
#include "headerFiles/Scenario.h"
#include <vector>
#include <string>
#include <random>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_map>
#include <ui_b_conclusion.h>
#include "headerFiles/window_three.h"
#include "headerFiles/window_four.h"
#include "headerFiles/window_five.h"

using namespace std;
ChapterOne::ChapterOne(const string &FileName) : maps(){
    readFile(FileName);
    currentChapter = 1;
}

ChapterOne::~ChapterOne() = default;

void ChapterOne::ChangeChapter(string FileName) {
    maps.clear();
    SceneQuestions.clear();
    readFile(FileName);
}

vector<string> ChapterOne::splitString(string line, char diameter) {
    string currentToken = "";
    vector<string> listOfTokens;
    for (char c : line) {
        char currentLetter = c;
        if(currentLetter == diameter) {
            listOfTokens.push_back(currentToken);
            currentToken = "";
        } else {
            currentToken += currentLetter;
        }
    }
    listOfTokens.push_back(currentToken);
    return listOfTokens;
}

unordered_map<Scenario,vector<Question>> ChapterOne::getMap(){
    return maps;
}

void ChapterOne::setWindowThree(window_three* window3) {
    this->window3 = window3;
}

void ChapterOne::setWindowFour(window_four* window4) {
    this->window4 = window4;
}

void ChapterOne::setWindowFive(window_five* window5) {
    this->window5 = window5;
}

void ChapterOne::displayWindowThree() const {
    string intro;
    if (window3 != nullptr) {
        string chapter;
        if (currentChapter ==1) {
            chapter = "ONE";
            intro = "Ethan always thought he was just an ordinary student—until the day his curiosity led him to take apart a broken radio. "
                           "What started as a small experiment quickly turned into a discovery of something far greater: "
                           "his natural talent for understanding how things work. This was the moment everything began.";

        }
        if (currentChapter ==2) {
            chapter = "TWO";
            intro ="A design challenge in science class pushed Ethan beyond textbooks and formulas. "
                   "With only limited materials and strict time constraints, he had to think like a real engineer. "
                   "As the pressure mounted, he learned that solving physical problems required more than knowledge—it demanded creativity,"
                   " patience, and trust in the laws of physics.";
        }
        if (currentChapter ==3) {
            chapter = "THREE";
            intro ="Ethan never imagined his computer science project would grow into a powerful tool for public safety. "
                   "When a city's power grid started failing, his algorithm became the key to identifying the cause. "
                   "This chapter follows Ethan as he uses data science to prevent disaster—and realizes just how far a few lines of code can go.";
        }
        if (currentChapter==4) {
            chapter = "FOUR";
            intro = "When a nearby village was cut off by flooding, "
                    "Ethan and his team were challenged to build a model bridge that could inspire a real solution."
                    " Combining mathematics, structural engineering, and teamwork, they tackled complex design problems with one goal: "
                    "to create something strong enough to withstand both nature and doubt.";
        }

        if (currentChapter ==5) {
            chapter = "FIVE";
            intro ="As news of a strange new illness spread, so did confusion and fear. "
                   "But Ethan saw patterns in the numbers—clues hidden in data. Drawing on concepts from biology and mathematical modeling, "
                   "he set out to understand how the disease moved. Could his model help slow the outbreak before it was too late?";

        }

        if (currentChapter ==6) {
            chapter = "SIX";
            intro ="The climate crisis felt overwhelming—until Ethan realized he could do something about it. "
                   "By developing a simulation to predict environmental impact, he gave decision-makers a tool to plan more sustainably. "
                   "In this chapter, Ethan learns that small actions, backed by science, can ripple into global change.";
        }

        if (currentChapter ==7) {
            chapter = "SEVEN";
            intro = "ears after his journey began, Ethan found himself in a new role: teacher, mentor, and guide. "
                    "As he shared his experiences with young learners, he understood that the greatest gift of knowledge is passing it on. "
                    "This chapter is a tribute to the power of inspiration, and how one person can ignite many futures.";

        }

        window3->setChapterLabel(chapter);

        window3->setIntroductionLabel(intro);

    }
}

void ChapterOne::displayWindowFour() {
    //generating random number
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,4);
    int randNumber = dist(gen);

    if (!maps.empty()) {
        int index = 0;
        for (auto &[Scene,options]: maps) {
            if (index == randNumber) {
                chosenScene = Scene;
                SceneQuestions = options;
            }
            index++;
        }

        //displaying chapter description and topic name
        if (window4 != nullptr) {
            window4->setChapterTopic(chosenScene.getTopic());
            window4->setTopiDescription(chosenScene.getTopic_Description());
        }
    }

}

bool ChapterOne::getIsFinished() {

    if (currentIndexQuestion == SceneQuestions.size()-1) {
        currentChapter++;
        isFinished = true;
    }
    else
        isFinished = false;

    return isFinished;
}

void ChapterOne::displayWindow_b_conclusion(bool isFailed) {
    string chapterOne_conclusion_failed = "You've failed to help Ethan discover his talent for science."
            "The world is doomed without Ethan's love for science."
            "His the Only person who can save the world from collapse."
            "You must reattempt this and help Ethan save the World from destruction";
    string chapterTwo_conclusion_failed = "You have failed to help Ethan solve this challenge. "
                                          "In The Engineer's Dilemma, "
                                          "applying real-world physics was key—forces, motion, and mechanics had to align. "
                                          "This time, the solution wasn't found. "
                                          "try again—Ethan still needs your help";
    string chapterThree_conclusion_failed = "You have failed to help Ethan solve this challenge."
                                            "In a city powered by data, the right algorithms could have turned chaos into order. "
                                            "But without the correct logic and automation, "
                                            "the solution slipped away. Analyze the patterns, and try again—Ethan is counting on your code.";
    string chapterFour_conclusion_failed = "You have failed to help Ethan solve this challenge."
                                           "The bridge needed balance, strength, "
                                           "and precise calculations—but a single misstep led to collapse. "
                                           "Revisit the math, understand the forces, and prepare to rebuild. Ethan’s mission is";
    string chapterFive_conclusion_failed = "You have failed to help Ethan solve this challenge."
                                           "The patterns of the outbreak were there—hidden in numbers and models—but the right strategy wasn’t found in time. "
                                           "Study the data, refine your approach, and return stronger. Ethan still needs a cure.";
    string chapterSix_conclusion_failed = "You have failed to help Ethan solve this challenge."
                                          "The clues were in the climate data, but the right balance of solutions wasn’t reached. "
                                          "Every choice matters in the fight for a sustainable future. "
                                          "Reassess the variables—Ethan still has a planet to protect.";
    string chapterSeven_conclusion_failed = "You have failed to help Ethan solve this challenge."
                                            "Passing on knowledge requires clarity, vision, and inspiration—but the message didn’t land this time. "
                                            "Reflect on how ideas take root and grow. Ethan still has minds to ignite.";

    //for success
    string chapterOne_conclusion_sucess = "You’ve taken your first step into the world of discovery. "
                                          "By fixing something as simple as a broken radio,"
                                          " you uncovered a hidden talent and ignited a passion for learning that will shape your journey."
                                          " The spark is lit—there’s no turning back!";

    string chapterTwo_conclusion_sucess = "Faced with real-world constraints, "
                                          "you turned theory into practice and solved a tough engineering challenge. "
                                          "Your grasp of physics and your creative thinking brought your design to life. "
                                          "You’re not just learning science—you’re applying it like a true engineer!";

    string chapterThree_conclusion_sucess = "Your coding skills and data-driven mindset helped avert a citywide disaster."
                                            " You didn’t just write a program—you created a solution that mattered."
                                            " You’ve proven that with the right data and a clear mind, anything is possible!";

    string chapterFour_conclusion_sucess = "You’ve tackled one of the toughest problems in structural design and emerged victorious. "
                                           "Your bridge stands strong because your math, planning, and perseverance stood stronger. "
                                           "You've earned your place among future engineers!";

    string chapterFive_conclusion_sucess = "With courage and intellect, "
                                           "you faced a public health crisis and used mathematical models to uncover life-saving answers."
                                           " Your work proved that science, when paired with compassion, can protect entire communities. "
                                           "You’re truly making a difference";

    string chapterSix_conclusion_sucess = "You turned data into action and helped guide the fight against climate change."
                                          " Your dedication to sustainability shows that science can be a force for global good. "
                                          "The planet needs voices like yours—keep leading the charge!";

    string chapterSeven_conclusion_sucess = "You’ve come full circle—what began as a spark has now become a guiding light for others. "
                                            "By teaching and inspiring the next generation, you’ve built a legacy that will last far beyond your own journey. "
                                            "The future is brighter because of you.";

    if (currentChapter == 1) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterOne_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterOne_conclusion_sucess);
            }
        }
    }
    if (currentChapter == 2) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterTwo_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterTwo_conclusion_sucess);
            }
        }
    }
    if (currentChapter == 3) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterThree_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterThree_conclusion_sucess);
            }
        }
    }
    if (currentChapter == 4) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterFour_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterFour_conclusion_sucess);
            }
        }
    }
    if (currentChapter == 5) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterFive_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterFive_conclusion_sucess);
            }
        }
    }
    if (currentChapter == 6) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterSix_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterSix_conclusion_sucess);
            }
        }
    }

    if (currentChapter == 7) {
        if (window6 != nullptr) {
            if (isFailed) {
                window6->setScreenLabel("DOOMSDAY");
                window6->setTextBroswerMessage(chapterSeven_conclusion_failed);
            }else {
                window6->setScreenLabel("CONGRATULATIONS");
                window6->setTextBroswerMessage(chapterSeven_conclusion_sucess);
            }
        }
    }


}

void ChapterOne::displayWindowFive() {
    cout << currentIndexQuestion <<" -- "<<SceneQuestions.size()-1<<endl;
    if (currentIndexQuestion >= SceneQuestions.size())
        return;

    Question currentQuestion = SceneQuestions[currentIndexQuestion];
    cout<<"im here display answer "<<currentQuestion.getAnswer()<<" "<<currentQuestion.getOptions().size()<<endl;
    if (window5 != nullptr) {
        window5->setHealth(lives);
        window5->on_lcdNumber_overflow(OverallPoint);

        string chapter = "One";
        if (currentChapter ==2)
            chapter = "Two";
        if (currentChapter ==3)
            chapter = "Three";
        if (currentChapter ==4)
            chapter = "Four";
        if (currentChapter ==5)
            chapter = "Five";
        if (currentChapter ==6)
            chapter = "Six";
        if (currentChapter ==7)
            chapter = "Seven";

        window5->setQuestionNumber("Chapter "+chapter);
        window5->setQuestion(currentQuestion.getQuestion());

        if (currentQuestion.getOptions().size()>2) {
            window5->setRadioBtn1(currentQuestion.getOptions()[0]);
            window5->setRadioBtn2(currentQuestion.getOptions()[1]);
            window5->setRadioBtn3(currentQuestion.getOptions()[2]);
            window5->setRadioBtn4(currentQuestion.getOptions()[3]);
        }
        if (currentQuestion.getOptions().size() == 2) {
            lives = 1;
            window5->setHealth(lives);
            window5->displayResult(
                "You've entered the danger zone. "
                "\nThis isn't just any question — this is Russian Roulette for your brain."
                "\nYou have 1 life. One shot. One decision. "
                "\nGet it wrong… and it's game over for this round. "
                "\nRead carefully. Think twice. Pull the trigger. ","True or False: Russian Roulette Mode");
            window5->trueOrFalseQuestions(currentQuestion.getOptions()[0],currentQuestion.getOptions()[1]);
            window5->displayResult("Your lives has been decreased to 1 for this Question","NOTE");
        }

    }
}

int ChapterOne::getLives() const {
    return lives;
}

std::string toLowercase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return str;
}

void ChapterOne::saveGameState() {
    if (isFinished) {
        //check chapter point so that we can calculate how well did the user complete the chapter
        //save to txt file all completed chapter and calculate how well the player completed it
        //all chapters are worth 72 points
        //gold is 72*0.8 = 58 so player has to get points greater than 58
        //gold is 72*0.65 = 47 so player has to get points greater than 47
        //gold is 72*0.55 = 36 so player has to get points greater then 36
        string completeType;
        if (chapterPoints > 58)
            completeType = "Gold";
        else if (chapterPoints > 47)
            completeType = "Silver";
        else if (chapterPoints > 36)
            completeType = "Bronze";
        else
            completeType = "none";

        //append to the exiting content
        ofstream saveChapter_information("C:/Users/Student/CLionProjects/untitled/GameDatabase/completed_chapters.txt",ios::app);
        if (saveChapter_information.is_open()) {
            //format for saving is
            //chapter number | completeType | chapterPoints
            saveChapter_information << to_string(currentChapter)+"|"+completeType<<"|"+to_string(chapterPoints)<<endl;
        }
        saveChapter_information.close();

        //save chapter points
        ofstream save_points("C:/Users/Student/CLionProjects/untitled/GameDatabase/game_points.txt");
        if (save_points.is_open()) {
            save_points <<to_string(OverallPoint);
        }
        save_points.close();
    }
}

void ChapterOne::displayResult() {
    //display the preview to the user
    Question currentQuestion = SceneQuestions[currentIndexQuestion];
    if (lives> 0) {
        string userAnswer = window5->getSelectedRadio();
        string lowercaseUserAnswer= toLowercase(userAnswer);
        if (userAnswer == "None") {
            window5->displayResult("Invalid Input Please select at least one option","ERROR");
            return;
        }

        if (userAnswer == currentQuestion.getAnswer() || lowercaseUserAnswer == currentQuestion.getAnswer()) {
            chapterPoints += QuestionPoint;
            OverallPoint += QuestionPoint;
            QuestionPoint = 9;
            currentIndexQuestion++;
            lives = 3;
            window5->displayResult("Correct","Result");

        }else {
            lives--;
            QuestionPoint -= 3;
            OverallPoint -= 3;
            chapterPoints -= 3;
            window5->displayResult("Incorrect, You have "+to_string(lives)+" live(s) left","Result");
        }
        if (lives == 1) {
            window5->displayResult("HINT: "+currentQuestion.getHint(),"HINT");
        }
    }else {

        //save chapter points
        ofstream save_points("C:/Users/Student/CLionProjects/untitled/GameDatabase/game_points.txt");
        if (save_points.is_open()) {
            save_points <<to_string(OverallPoint);
        }
        save_points.close();

        //user has failed the chapter display the appropriate message
        QuestionPoint = 9;
        lives = 3;
    }

}

void ChapterOne::resetLives() {
    lives = SceneQuestions[currentIndexQuestion].getOptions().size() == 2 ? 1:3;
}

void ChapterOne::readFile(const string& FileName) {
    ifstream file;
    file.open("C:/Users/Student/CLionProjects/untitled/"+FileName);
    vector<Question> Questions;
    string DIRECTORY = splitString(FileName,'/')[0];

    if (!file.is_open()) {
        cout<<"File failed to be opened"<<endl;
        return ;
    }

    string str="";
    string line ="";
    while (getline(file,line)) {
        vector<string> tokens = splitString(line, '|');
        if (tokens.size() < 3)
            continue;

        const string& topic = tokens[0];
        const string& topicDescription = tokens[1];
        const string& filename2 = tokens[2];
        const string& difficulty_level = toLowercase( tokens[3]);
        Scenario scenario(topic,topicDescription,filename2,difficulty_level);

        ifstream file2;
        string line2 ="";
        file2.open("C:/Users/Student/CLionProjects/untitled/"+DIRECTORY+"/"+filename2);
        if (file2.is_open()) {
            while (getline(file2,line2)) {
                vector<string> tokens2 = splitString(line2,'|');
                if (tokens2.size()<4)
                    continue;
                const string& question = tokens2[0];
                vector<string> options = splitString(tokens2[1],';');
                const string& answer = tokens2[2];
                const string& hint = tokens2[3];
                bool selected = false;
                Question quest(question,options,answer,hint,selected);
                Questions.push_back(quest);
            }
        }
        maps[scenario]=Questions;
        Questions.clear();
        file2.close();
    }
    file.close();

    //read points and initialize them
    ifstream readPoints("C:/Users/Student/CLionProjects/untitled/GameDatabase/game_points.txt");
    if (readPoints.is_open()) {
        string line;
        while (getline(readPoints,line)) {
            OverallPoint = stoi(line);
        }
    }
    readPoints.close();
}

bool ChapterOne::setCurrentIndexQuestion(const int index) {
    //check if the index is greater than current list of questions
    if (index >= SceneQuestions.size()-1)
        return false;
    currentIndexQuestion = index;
    return true;
}

int ChapterOne::getCurrentIndexQuestion() const {
    return currentIndexQuestion;
}

bool ChapterOne::buy_question_status() {
    //questions with 4 options can be bought by 20 points
    //true and false questions can only be bought with 50 points
    if (OverallPoint == 0)
        return false;

    //min points required to buy a question is at least 20
    if (OverallPoint < 20)
        return false;

    if ((SceneQuestions[currentIndexQuestion].getOptions().size() == 2)) {

        //check if overall points are greater than 50 to enable buy question
        if (OverallPoint < 50) {
            return false;
        }


        OverallPoint -= 50;
        chapterPoints -= 50;
        lives =
        is_current_chapter_bought = true;



        return true;
    }

    //this is the default buy for normal questions
    OverallPoint -= 20;
    chapterPoints -= 20;
    is_current_chapter_bought = true;
    return true;
}

void ChapterOne::setMapScenarios(string difficulty_level) {
    cout<<"im inside you "<<maps.size()<<endl;
    unordered_map<Scenario,vector<Question>> cleanMap;
    for (auto&[currentScenario, Questions]: maps) {
        if (currentScenario.getDifficulty_level() == difficulty_level) {
            cleanMap[currentScenario] = Questions;
        }
    }
    maps = cleanMap;
    cout<<"we are here "<< maps.size()<<endl;
}
