#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<int, string>> s;
    string a;
    for (int i = 0; i < strings.size(); i++) {
        s.push_back(make_pair(strings[i][n], strings[i]));
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        answer.push_back(s[i].second);
    }
    return answer;
}