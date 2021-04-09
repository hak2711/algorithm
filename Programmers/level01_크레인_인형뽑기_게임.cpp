#include <string>
#include <vector>
#include <stack>

using namespace std;

int push(stack<int>& s, int item) {
    if (!s.empty() && s.top() == item) { // ���� �������� 2�� �� pop�Ǵ� ���
        s.pop();
        return 2;
    }

    s.push(item);
    return 0; // pop���� �ʰ� push�Ǵ� ���
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