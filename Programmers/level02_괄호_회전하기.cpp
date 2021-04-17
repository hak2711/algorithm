#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

bool isMatching(string& s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        char x = s[i];

        if (x == '(' || x == '[' || x == '{') st.push(x);
        else {
            if (st.empty()) return false;
            char y;

            if (x == ')') y = '(';
            else if (x == ']') y = '[';
            else y = '{';

            if (st.top() != y) return false;
            st.pop();
        }
    }

    if (!st.empty()) return false;

    return true;
}

int solution(string s) {
    int answer = 0;
    string s2 = "";

    for (int i = 0; i < s.size(); i++) {
        string s2 = "";
        for (int j = 0; j < s.size(); j++) {
            s2 += s[(i + j) % s.size()];
        }
        if (isMatching(s2)) answer++;
    }

    return answer;
}