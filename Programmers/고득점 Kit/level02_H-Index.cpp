#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    bool ended[citations.size()]; // 더 이상 비교해보지 않아도 된다면 true, 아니라면 false
    fill_n(ended, citations.size(), false);

    for (int i = 0; i < citations.size(); i++) {
        int v = 0;
        for (int j = 0; j < citations.size(); j++) {
            if (!ended[j]) { // 비교해봐야 하는 원소인 경우
                if (citations[j] >= i) v++; // i값 이상의 원소 개수 count
                else ended[j] = true; // i값보다 작은 경우 i+1부터는 방문하지 않도록 함.
            }
        }

        if (v >= i) // i값 이상의 원소 개수(v)가 i개 이상이라면
            answer = i;
    }

    return answer;
}