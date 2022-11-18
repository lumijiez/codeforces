#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    short int n = 0,
        max = 0,
        score = 0,
        nrOfMax = 0;
        
    string name;
    vector<string> names;
    map<string, short int> nameScore;
    vector<short int> scores;
    vector<string> topNames;
    cin >> n;
    for (short int i = 0; i != n; i++) {
        cin >> name >> score;
        scores.push_back(score);
        names.push_back(name);
        if (nameScore.count(name) == 0) {
            nameScore.insert(pair<string, short int>(name, score));
        }
        else nameScore[name] += score;
    }
    for (auto it = nameScore.begin(); it != nameScore.end(); ++it) {
        if (it->second > max) {
            max = it->second;
            nrOfMax = 1;
        }
        else if (it->second == max) nrOfMax++;
    }
    for (auto it = nameScore.begin(); it != nameScore.end(); ++it) {
        if (it->second == max) topNames.push_back(it->first);
        it->second = 0;
    }
    for (short int i = 0; i != names.size(); i++) {
        if (count(topNames.begin(), topNames.end(), names.at(i)))
            nameScore[names.at(i)] += scores.at(i);
        if (nameScore[names.at(i)] >= max) {
            cout << names.at(i);
            break;
        }
    }
}
