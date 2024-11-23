#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int lastDigitNumber = 0;
    for (int i = 0; i < N; ++i)
    {
        int lastDigit = numbers[i] % 10;
        lastDigitNumber = lastDigitNumber * 10 + lastDigit;
    }

    if (lastDigitNumber % 10 == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
