#include<iostream>
#include<queue>

using namespace std;

int N;
priority_queue<int> heap;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == 0 && heap.empty()) cout << x << "\n";
        else if (x == 0 && !heap.empty()) {
            cout << heap.top() << "\n";
            heap.pop();
        }
        else heap.push(x);
    }
}