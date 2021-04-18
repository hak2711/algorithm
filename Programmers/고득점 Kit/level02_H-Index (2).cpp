#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    for (int i = citations.size(); i >= 0; i--) {
        int v = 0;
        for (int j = 0; j < citations.size(); j++) {
            if (citations[j] >= i) v++;
        }

        if (v >= i) {
            return i;
        }
    }

    return answer;
}