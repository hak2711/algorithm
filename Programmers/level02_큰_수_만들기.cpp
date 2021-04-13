#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/*
ó���� ����� ���� ������ �ִ밪 �ε��� ã�� �Լ�
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
        q.push(number[index]); // ������ �ִ밪�� ���Ͽ� ť�� ����
        k = k - (index - start - 1);
        start = index;
    }

    char x;
    int end = 0;

    while (answer.size() < (number.size() - firstk)) {
        if (!q.empty()) { // ť�� �ִ� ���ڵ��� ���� ����
            x = q.front();
            answer += x;
            q.pop();
        }
        else { // ť�� ����ٸ� ������ ���� ���� ���ҵ��� �״�� �ٿ�����
            for (int i = index + 1; i < number.size(); i++) {
                answer += number[i];
            }
        }
    }



    return answer;
}