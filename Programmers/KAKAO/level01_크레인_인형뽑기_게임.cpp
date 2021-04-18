#include <string>
#include <vector>
#include <stack>

using namespace std;

int push(stack<int>& s, int item) {
    if (!s.empty() && s.top() == item) { // 같은 아이템이 2개 모여 pop되는 경우
        s.pop();
        return 2;
    }

    s.push(item);
    return 0; // pop되지 않고 push되는 경우
}

int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> basket;
    int answer = 0;

    for (int i = 0; i < moves.size(); i++) {
        int x = moves[i] - 1;
        for (int j = 0; j < board[x].size(); j++) {
            if (board[j][x] != 0) {
                answer += push(basket, board[j][x]);
                board[j][x] = 0;
                break;
            }
        }

    }

    return answer;
}