#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<double, int> a, pair<double, int> b) {
    if (a.first == b.first) { // �������� ������ ���� ��ȣ ����
        return a.second < b.second;
    }
    else return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<pair<double, int>> failure; // ������, �������� ��ȣ
    vector<int> answer;

    int played = 0; // ������ ���
    int playing = 0; // ���������� Ŭ�������� ���� ���
    double failrate = 0; // ������

    for (int i = 1; i <= N; i++) {
        played = 0;
        playing = 0;
        for (int j = 0; j < stages.size(); j++) {
            if (stages[j] >= i) { // ������ ���
                played++;
                if (stages[j] == i) playing++; // ���� ���� ���� ���
            }
        }

        if (played != 0) // ������ ����� 0�� ���
            failrate = (double)playing / played;
        else failrate = 0;

        failure.push_back(make_pair(failrate, i));
    }

    sort(failure.begin(), failure.end(), compare); // ������ ���� �������� ����

    for (int i = 0; i < failure.size(); i++) {
        answer.push_back(failure[i].second);
    }

    return answer;
}
