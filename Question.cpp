//
// Created by Student on 2025/04/02.
//

#include "C:/Users/Student/CLionProjects/QuizApp/headerFiles/Question.h"
#include <vector>

using namespace std;

Question::Question(string question, vector<string> options, string answer, string hint, bool chosen) {
    setQuestion(question);
    setOptions(options);
    setAnswer(answer);
    setHint(hint);
    setChosen(chosen);
}

void Question::setAnswer(string answer) {
    Question::answer = answer;
}

void Question::setOptions(vector<string> options) {
    Question::options = options;
}

void Question::setQuestion(string question) {
    Question::question = question;
}

void Question::setHint(string hint) {
    Question::hint = hint;
}

void Question::setChosen(bool chosen) {
    Question::chosen = chosen;
}

string Question::getAnswer() {
    if (answer == "True")
        return "A";
    if (answer == "False")
        return "B";
    return  answer;
}

bool Question::getChosen() {
    return chosen;
}

string Question::getHint() {
    return hint;
}

vector<string> Question::getOptions() {
    return options;
}

string Question::getQuestion() {
    return question;
}











