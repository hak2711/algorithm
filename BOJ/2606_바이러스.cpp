#include <iostream>
#include <vector>
#define MAX 101

using namespace std;

vector<int> cpt[MAX];
int visited[MAX];
int answer;

void dfs(int n) {
    if (visited[n]) return;

    visited[n] = true;
    answer++;

    for (int i = 0; i < cpt[n].size(); i++) {
        int x = cpt[n][i];
        if (!visited[x]) {
            dfs(x);
        }
    }
}

int main(void) {
    int N, M;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        cpt[x].push_back(y);
        cpt[y].push_back(x);
    }

    dfs(1);

    cout << answer - 1;
}