#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000001

using namespace std;

int under[MAX];

int main(void) {
    vector<pair<int, int>> v;
    int count = 0;

    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(make_pair(x, i));
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < N; i++) {
        if (v[i - 1].first < v[i].first) {
            under[v[i].second] = ++count;
        }
        else under[v[i].second] = count;
    }

    for (int j = 0; j < N; j++) {
        cout << under[j] << " ";
    }
}