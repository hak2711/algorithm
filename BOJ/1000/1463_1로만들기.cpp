#include<iostream>
#include<algorithm>
#define MAX 1000001

using namespace std;

int numbers[MAX];

int calculate(int n) {
    if (n == 1) return numbers[n];

    if (numbers[n] != 0) return numbers[n];

    if (n == 2 || n == 3) {
        numbers[n] = 1;
        return numbers[n];
    }

    if (n % 3 == 0 && n % 2 == 0) return numbers[n] = min(calculate(n / 2), calculate(n / 3)) + 1;
    else if (n % 3 == 0) return numbers[n] = min(calculate(n - 1), calculate(n / 3)) + 1;
    else if (n % 2 == 0) {
        numbers[n] = min(calculate(n - n % 3), calculate(n / 2));
        if (numbers[n] == numbers[n / 2]) numbers[n] += 1;
        else numbers[n] += (n % 3);
    }
    else {
        numbers[n] = min(calculate(n - n % 3), calculate(n - 1));
        if (numbers[n] == numbers[n - 1]) numbers[n] += 1;
        else numbers[n] += (n % 3);
    }

    return numbers[n];

}

int main(void) {
    int X;

    cin >> X;

    cout << calculate(X);

    for (int i = 0; i <= X; i++) {
        cout << numbers[i] << " ";
    }
}