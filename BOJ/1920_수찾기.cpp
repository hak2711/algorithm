#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int N, M;
int a[MAX], x[MAX];

int binarySearch(int left, int right, int key) {
	if (left > right) return 0;

	int mid = (left + right) / 2;

	if (a[mid] == key) return 1;
	else if (a[mid] > key) return binarySearch(left, mid - 1, key);
	else return binarySearch(mid + 1, right, key);
}

int main(void) {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N);

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < M; i++) {
		cout << binarySearch(0, N, x[i]) << "\n";
	}
}