#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> s;

    for (int i = 0; i < numbers.size(); i++) {
        if ((i >= 1) && (numbers[i] == numbers[i - 1])) continue;

        for (int j = i + 1; j < numbers.size(); j++) {
            s.insert(numbers[j] + numbers[i]);
        }
    }

    vector<int> answer(s.begin(), s.end());

    return answer;
}