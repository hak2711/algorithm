#include<iostream>
#include<map>

using namespace std;

map<string, int> s;
map<int, string> s2;

int N, M;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string j;
        cin >> j;
        s.insert(make_pair(j, i + 1));
        s2.insert(make_pair(i + 1, j));
    }

    for (int i = 0; i < M; i++) {
        string x;
        cin >> x;
        int y = atoi(x.c_str());

        if (y) {
            cout << s2.find(y)->second << '\n';
        }
        else {
            cout << s.find(x)->second << '\n';
        }
    }
}