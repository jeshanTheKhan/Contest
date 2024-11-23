#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, reverse = 0, r;
        cin >> n;
        for (; n > 0; n = n / 10)
        {
            r = n % 10;
            reverse = reverse * 10 + r;
        }
        cout << reverse << endl;
    }
    return 0;
}