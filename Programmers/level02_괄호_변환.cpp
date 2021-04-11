#include <string>
#include <stack>

using namespace std;

int splitString(string w) { // u�� v�� �и����� ã��
    int opened = 0;
    int closed = 0;

    for (int i = 0; i < w.size(); i++) {
        if (w[i] == '(') opened++;
        else closed++;

        if (opened == closed) return i;
    }

    return w.size() - 1;
}

bool isCorrect(string u) { // �ùٸ� ��ȣ ���ڿ����� Ȯ��
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

string changeCorrect(string w) { // �ùٸ� ��ȣ ���ڿ��� ��ȯ
    if (w.size() == 0) return w; // �� ���ڿ��� ���

    string u = w.substr(0, splitString(w) + 1); // u�� v�� �и�
    string v = w.substr(splitString(w) + 1);

    if (isCorrect(u)) { // u�� �ùٸ� ��ȣ ���ڿ��� ��� v�� �������� ��� ����
        return u + changeCorrect(v);
    }
    else { // u�� �ùٸ��� ���� ���
        string newu = "";
        v = changeCorrect(v); // v�� �������� ��� ����

        for (int i = 1; i < u.size() - 1; i++) { // u�� ù,������ ���� �� ��ȣ���� ������
            if (u[i] == '(') newu += ')';
            if (u[i] == ')')newu += '(';
        }

        return '(' + v + ')' + newu;
    }
}

string solution(string p) {
    string answer = "";

    if (isCorrect(p)) answer = p; // �̹� �ùٸ� ��ȣ ���ڿ��� ���
    else answer = changeCorrect(p);

    return answer;
}