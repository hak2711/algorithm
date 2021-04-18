#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string x, string y) { // ���� ����
    return x + y > y + x;
}

string solution(vector<int> numbers) {
    vector<string> numbers_str;
    string answer = "";
    
    for (int i = 0; i < numbers.size(); i++) {
        numbers_str.push_back(to_string(numbers[i]));
    }

    sort(numbers_str.begin(), numbers_str.end(), compare); // ����

    if (numbers_str[0].compare("0") == 0) return "0"; // ��� ���Ұ� 0�� ���

    for (int i = 0; i < numbers.size(); i++) { // ������� �̾���̱�
        answer += numbers_str[i];
    }

    return answer;
}