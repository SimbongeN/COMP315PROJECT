//
// Created by Student on 2025/04/02.
//

#include "headerFiles/Scenario.h"

using namespace std;

Scenario::Scenario(string topic,string topic_description, string filename,string difficulty_level) {
    setTopic(topic);
    setTopic_description(topic_description);
    setFilename(filename);
    setDifficulty_level(difficulty_level);
}
Scenario::Scenario() {
    setTopic("");
    setTopic_description("");
    setFilename("");
}

void Scenario::setDifficulty_level(string difficulty_level) {
    this->difficulty_level = difficulty_level;
}

string Scenario::getDifficulty_level() const {
    return difficulty_level;
}


string Scenario::getTopic() const {
    return topic;
}

string Scenario::getTopic_Description() const {
    return topic_description;
}

string Scenario::getFilename()const {
    return filename;
}

void Scenario::setTopic(string topic) {
    Scenario::topic = topic;
}

void Scenario::setTopic_description(string topic_description) {
    Scenario::topic_description = topic_description;
}

void Scenario::setFilename(string filename) {
    Scenario::filename = filename;
}
