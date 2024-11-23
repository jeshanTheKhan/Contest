#include <bits/stdc++.h>
using namespace std;

string addLargeNumbers(string num1, string num2)
{

    if (num1.length() < num2.length())
        swap(num1, num2);

    int n1 = num1.length(), n2 = num2.length();
    string result = "";

    int carry = 0;
    for (int i = n1 - 1, j = n2 - 1; i >= 0; i--, j--)
    {
        int sum = (num1[i] - '0') + (j >= 0 ? num2[j] - '0' : 0) + carry;
        result.insert(result.begin(), sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry)
        result.insert(result.begin(), carry + '0');

    return result;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        string num1, num2;
        cin >> num1 >> num2;

        string sum = addLargeNumbers(num1, num2);

        cout << "Case #" << t << ": " << sum << endl;
    }

    return 0;
}
