//
// Created by Student on 2025/04/02.
//

#ifndef SCENARIO_H
#define SCENARIO_H
#include <string>

using namespace std;
class Scenario {
private:
    string topic;
    string topic_description;
    string filename;
    string difficulty_level;

public:
    Scenario(string topic, string topic_description, string filename,string difficulty_level);
    Scenario();
    string getTopic() const;
    string getTopic_Description() const;
    string getFilename() const;
    string getDifficulty_level() const;
    void setDifficulty_level(string difficutly_level);
    void setTopic(string topic);
    void setTopic_description(string topic_description);
    void setFilename(string filename);

    bool operator == (const Scenario& other) const {
        return  topic == other.topic && topic_description == other.topic_description;
    }

};

// Define a custom hash function for Scenario
namespace std {
    template <>
    struct hash<Scenario> {
        size_t operator()(const Scenario& scenario) const noexcept {
            return hash<string>()(scenario.getTopic()) ^ (hash<string>()(scenario.getTopic_Description()) << 1);
        }
    };
}
#endif //SCENARIO_H

