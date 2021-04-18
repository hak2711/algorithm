#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, int> a, pair<double, int> b) {
    if (a.first == b.first) { // 실패율이 같으면 작은 번호 먼저
        return a.second < b.second;
    }
    else return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<pair<double, int>> failure; // 실패율, 스테이지 번호
    vector<int> answer;

    int played = 0; // 도달한 사람
    int playing = 0; // 도달했지만 클리어하지 못한 사람
    double failrate = 0; // 실패율

    for (int i = 1; i <= N; i++) {
        played = 0;
        playing = 0;
        for (int j = 0; j < stages.size(); j++) {
            if (stages[j] >= i) { // 도달한 사람
                played++;
                if (stages[j] == i) playing++; // 아직 깨지 못한 사람
            }
        }

        if (played != 0) // 도달한 사람이 0인 경우
            failrate = (double)playing / played;
        else failrate = 0;

        failure.push_back(make_pair(failrate, i));
    }

    sort(failure.begin(), failure.end(), compare); // 실패율 따라 내림차순 정렬

    for (int i = 0; i < failure.size(); i++) {
        answer.push_back(failure[i].second);
    }

    return answer;
}
