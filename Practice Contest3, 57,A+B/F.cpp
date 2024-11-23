#include <bits/stdc++.h>

using namespace std;

string addLargeNumbers(string num1, string num2)
{
    if (num1.length() < num2.length())
        swap(num1, num2);

    string result = "";

    int n1 = num1.length(), n2 = num2.length();
    int carry = 0;

    for (int i = n1 - 1; i >= 0; --i)
    {
        int sum = (num1[i] - '0') + (i >= n1 - n2 ? num2[i - (n1 - n2)] - '0' : 0) + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry)
        result.push_back(carry + '0');

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        string num1, num2;
        cin >> num1 >> num2;

        string sum = addLargeNumbers(num1, num2);

        cout << "Case #" << t << ": " << sum << endl;
    }

    return 0;
}
