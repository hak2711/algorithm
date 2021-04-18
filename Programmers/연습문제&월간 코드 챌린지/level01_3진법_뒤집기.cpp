#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    vector<int> n3;
    int dividend = n;
    int divisor = 3;
    int answer = 0;

    while (dividend >= 1) {
        n3.push_back(dividend % divisor);
        dividend = dividend / divisor;
    }

    for (int i = 0; i < n3.size(); i++) {
        if (n3[i] == 0) continue;
        int number = (int)pow(3, n3.size() - i - 1);
        answer += (n3[i] * number);
    }

    return answer;
}