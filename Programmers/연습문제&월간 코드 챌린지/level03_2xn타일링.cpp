#include <string>
#include <vector>
#define MAX 60001
using namespace std;

int tilenum[MAX];

int tile(int n) {
    if (n == 1 || n == 2) return tilenum[n];
    if (tilenum[n] != 0) return tilenum[n];

    tilenum[n] = (tile(n - 1) + tile(n - 2)) % 1000000007;
    return tilenum[n];
}

int solution(int n) {
    tilenum[1] = 1;
    tilenum[2] = 2;

    int answer = tile(n);
    return answer;
}