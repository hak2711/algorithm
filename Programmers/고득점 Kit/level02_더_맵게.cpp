#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int answer = 0;

    for (int i = 0; i < scoville.size(); i++) { // �� �ʱ�ȭ.
        pq.push(scoville[i]);
    }

    while (!pq.empty()) {
        int least = pq.top();
        pq.pop();

        if (least >= K) break; // ���� ����. ����.
        if (pq.empty()) { // ���� �� ���. ��� ���ο� ���ں� ���� ���� �� ����. ����.
            answer = -1;
            break;
        }

        int second = pq.top();
        pq.pop();

        int newScoville = least + second * 2;
        pq.push(newScoville);
        answer++;
    }

    return answer;
}