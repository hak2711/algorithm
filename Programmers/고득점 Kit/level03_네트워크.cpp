#include <string>
#include <vector>

using namespace std;

int visited[201];
int answer;

void dfs(int v, vector<vector<int>> &computers) {
    visited[v] = answer;

    for (int i = 0; i < computers[v].size(); i++) {
        if (v == i) continue;

        if ((computers[v][i] == 1) && !visited[i]) {
            dfs(i, computers);
        }
    }

}

int solution(int n, vector<vector<int>> computers) {
    for (int i = 0; i < computers.size(); i++) {
        if (!visited[i]) {
            ++answer;
            dfs(i, computers);
        }
    }

    return answer;
}