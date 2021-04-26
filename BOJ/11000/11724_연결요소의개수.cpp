#include<iostream>
#include<vector>
#define MAX 1001

using namespace std;

vector<int> graph[MAX];
int visited[MAX];

void dfs(int n) {
    if (visited[n]) return;

    visited[n] = true;

    for (int i = 0; i < graph[n].size(); i++) {
        int x = graph[n][i];

        if (!visited[x])
            dfs(x);
    }
}

int main(void) {
    int N, M;
    int count = 0;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
            count++;
        }
    }

    cout << count;
}