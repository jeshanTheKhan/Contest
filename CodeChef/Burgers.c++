#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
        {
            cout << a << endl;
        }
        else if (b < a)
        {
            cout << b << endl;
        }
        else if (a == b)
        {
            cout << a << endl;
        }
    }
    return 0;
}