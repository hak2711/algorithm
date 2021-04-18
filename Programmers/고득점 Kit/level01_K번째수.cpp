#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> numbers;

    for (int n = 0; n < commands.size(); n++) {
        int i = commands[n][0];
        int j = commands[n][1];
        int k = commands[n][2];

        numbers.assign(array.begin() + i - 1, array.begin() + j); // 자르기
        sort(numbers.begin(), numbers.end()); // 정렬하기
        answer.push_back(numbers[k - 1]); // k번째 수
    }
    return answer;
}