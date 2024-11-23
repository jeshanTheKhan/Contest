#include <bits/stdc++.h>
using namespace std;

string addLargeNumbers(const string& num1, const string& num2) {
    string result;
    int carry = 0;
    
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0)
            sum += num1[i--] - '0';
        if (j >= 0)
            sum += num2[j--] - '0';
        
        carry = sum / 10;
        sum %= 10;
        
        result.push_back(sum + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        string A, B;
        cin >> A >> B;

        string sum = addLargeNumbers(A, B);
        cout << "Case #" << t << ": " << sum << endl;
    }

    return 0;
}
