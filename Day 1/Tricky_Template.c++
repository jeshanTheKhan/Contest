#include <iostream>
#include <vector>

using namespace std;

long long dp[35];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 35; i++) {
            dp[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if ((1 << (i - j)) > (1 << j) + (1 << i)) {
                    dp[i] += dp[j];
                }
            }
            if (i >= 2) {
                dp[i] += (i - 1) * (i - 2) / 2;
            }
        }
        cout << dp[n - 1] << endl;
    }
    return 0;
}