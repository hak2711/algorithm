#include <string>
#include <iostream>

using namespace std;

string toNumber124(int n) {
    if (n == 0) return "1";
    if (n == 1) return "2";
    if (n == 2) return "4";

    return toNumber124(n / 3 - 1) + toNumber124(n % 3);
}

string solution(int n) {
    string answer = "";

    answer = toNumber124(n - 1); //���� ���� �͵鳢�� �� �������� ����� ����

    return answer;
}
