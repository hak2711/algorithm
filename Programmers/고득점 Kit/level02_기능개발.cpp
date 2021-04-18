#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    while (true) {
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }

        if (progresses[0] >= 100) {
            int value = 1;
            for (int j = 1; j < progresses.size(); j++) {
                if (progresses[j] >= 100) value++;
                else break;
            }
            answer.push_back(value);
            progresses.erase(progresses.begin(), progresses.begin() + value);
            speeds.erase(speeds.begin(), speeds.begin() + value);
        }
        if (progresses.size() <= 0) break;
    }

    return answer;
}