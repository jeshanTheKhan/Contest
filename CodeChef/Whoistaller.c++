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
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    return 0;
}