#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int find_smaller(int i, vector<int>& prices) {
    int index = 0;
    for (int k = 1; k < (prices.size() - i); k++) {
        if (prices[i] > prices[i + k]) return ++index;
        else ++index;
    }
    return index;
}

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for (int i = 0; i < prices.size(); i++) {
        int index = find_smaller(i, prices);
        answer.push_back(index);
    }
    return answer;
}