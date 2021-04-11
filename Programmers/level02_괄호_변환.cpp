#include <string>
#include <stack>

using namespace std;

int splitString(string w) { // u와 v의 분리지점 찾기
    int opened = 0;
    int closed = 0;

    for (int i = 0; i < w.size(); i++) {
        if (w[i] == '(') opened++;
        else closed++;

        if (opened == closed) return i;
    }

    return w.size() - 1;
}

bool isCorrect(string u) { // 올바른 괄호 문자열인지 확인
    stack<char> s;

    for (int i = 0; i < u.size(); i++) {
        if (u[i] == '(') s.push(u[i]);
        else {
            if (s.empty()) return false;
            else {
                s.pop();
            }
        }
    }

    if (!s.empty()) return false;

    return true;
}

string changeCorrect(string w) { // 올바른 괄호 문자열로 변환
    if (w.size() == 0) return w; // 빈 문자열인 경우

    string u = w.substr(0, splitString(w) + 1); // u와 v로 분리
    string v = w.substr(splitString(w) + 1);

    if (isCorrect(u)) { // u가 올바른 괄호 문자열인 경우 v를 기준으로 재귀 시행
        return u + changeCorrect(v);
    }
    else { // u가 올바르지 않은 경우
        string newu = "";
        v = changeCorrect(v); // v를 기준으로 재귀 시행

        for (int i = 1; i < u.size() - 1; i++) { // u의 첫,끝문자 제거 후 괄호방향 뒤집기
            if (u[i] == '(') newu += ')';
            if (u[i] == ')')newu += '(';
        }

        return '(' + v + ')' + newu;
    }
}

string solution(string p) {
    string answer = "";

    if (isCorrect(p)) answer = p; // 이미 올바른 괄호 문자열인 경우
    else answer = changeCorrect(p);

    return answer;
}