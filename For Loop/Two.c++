#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        int result = sumOfDigits(N);
        cout << result << endl;
    }

    return 0;
}
