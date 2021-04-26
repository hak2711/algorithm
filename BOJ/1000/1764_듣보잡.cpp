#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> s;
vector<string> sl;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, i;
    string x;

    cin >> N >> M;

    for (i = 0; i < N; i++) {
        cin >> x;
        s.push_back(x);
    }

    sort(s.begin(), s.end());

    for (i = 0; i < M; i++) {
        cin >> x;

        if (binary_search(s.begin(), s.end(), x)) sl.push_back(x);
        else;
    }

    sort(sl.begin(), sl.end());

    cout << sl.size() << "\n";

    for (i = 0; i < sl.size(); i++) {
        cout << sl[i] << "\n";
    }


}