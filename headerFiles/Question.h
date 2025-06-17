//
// Created by Student on 2025/04/02.
//

#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include <vector>

using namespace std;
class Question {
private:
  string question;
  vector<string> options;
  string answer;
  string hint;
  bool chosen{};

public:
  Question(string question, vector<string> options, string answer, string hint, bool chosen);
  void setQuestion(string question);
  void setOptions(vector<string> options);
  void setAnswer(string answer);
  void setHint(string hint);
  void setChosen(bool chosen);
  string getQuestion();
  vector<string> getOptions();
  string getAnswer();
  string getHint();
  bool getChosen();
};

#endif //QUESTION_H
