#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;
    set<int> s2;

    for (int i = 1; i <= 20; i++) {
        s2.insert(i);
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        string st;
        int x;

        cin >> st;

        if (st == "all") {
            s = s2;
        }

        else if (st == "empty") s.clear();

        else {
            cin >> x;
            set<int>::iterator iter;

            if (st == "check") {
                cout << s.count(x) << "\n";
            }
            else if (s.count(x)) {
                iter = s.find(x);
                s.erase(iter);
            }
            else if (st == "toggle" || st == "add") s.insert(x);
            else;
        }

    }
}