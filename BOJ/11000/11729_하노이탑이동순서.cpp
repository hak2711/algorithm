//하노이 탑 이동 순서

#include <stdio.h>
#include <math.h>

void hanoi_rec(int from, int mid, int to, int x) { // 하노이 타워 함수
	if (x == 1) {
		printf("%d %d\n", from, to);
	}

	else {
		hanoi_rec(from, to, mid, x - 1);
		printf("%d %d\n", from, to);
		hanoi_rec(mid, from, to, x - 1);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	int execution;
	execution = pow(2, n) - 1; // 별도로 시행횟수 계산
	printf("%d\n", execution);

	hanoi_rec(1, 2, 3, n);
}