#include <iostream>
#include <cstdio>
#define MAX 1000000

using namespace std;

int N, B, C;
int p[MAX];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x = 0;
	long long sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> p[i];
	}

	cin >> B >> C;

	for (int i = 0; i < N; i++) {
		if (p[i] > 0) {
			sum++;
			p[i] -= B;
		}

		if (p[i] > 0) {
			sum += ((p[i] - 1) / C + 1);
		}
	}

	cout << sum;
}