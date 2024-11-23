#include <bits/stdc++.h>

using namespace std;

int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}

bool isLucky(int n) {
    return (n == 4 || n == 7);
}

int main() {
    long long n;
    cin >> n;

    int luckyDigitCount = countLuckyDigits(n);

    if (isLucky(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
