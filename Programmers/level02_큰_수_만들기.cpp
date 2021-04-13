#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/*
처음에 사용한 직접 정의한 최대값 인덱스 찾기 함수
int find_max_index(string &n, int start, int end){
    int max = -1;
    int max_index = 0;

    for(int i = start; i<=end; i++){
        if (n[i] == '9') return i;

        if (max < n[i]) {
            max = n[i];
            max_index = i;
        }
    }

    return max_index;
}
*/

string solution(string number, int k) {
    queue<char> q;
    int index = 0;
    int start = -1;
    int firstk = k;
    string answer = "";

    while (k > 0) {
        index = max_element(number.begin() + start + 1, number.begin() + start + 2 + k) - number.begin();
        q.push(number[index]); // 구간별 최대값을 구하여 큐에 저장
        k = k - (index - start - 1);
        start = index;
    }

    char x;
    int end = 0;

    while (answer.size() < (number.size() - firstk)) {
        if (!q.empty()) { // 큐에 있는 숫자들을 먼저 꺼냄
            x = q.front();
            answer += x;
            q.pop();
        }
        else { // 큐가 비었다면 마지막 원소 뒤의 원소들을 그대로 붙여넣음
            for (int i = index + 1; i < number.size(); i++) {
                answer += number[i];
            }
        }
    }



    return answer;
}