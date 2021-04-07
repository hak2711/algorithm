#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string x, string y) { // 정렬 기준
    return x + y > y + x;
}

string solution(vector<int> numbers) {
    vector<string> numbers_str;
    string answer = "";
    
    for (int i = 0; i < numbers.size(); i++) {
        numbers_str.push_back(to_string(numbers[i]));
    }

    sort(numbers_str.begin(), numbers_str.end(), compare); // 정렬

    if (numbers_str[0].compare("0") == 0) return "0"; // 모든 원소가 0인 경우

    for (int i = 0; i < numbers.size(); i++) { // 순서대로 이어붙이기
        answer += numbers_str[i];
    }

    return answer;
}