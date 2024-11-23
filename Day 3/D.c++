#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    while (cin >> t && t != 0)
    {
        vector<int> ages(t);
        for (int i = 0; i < t; ++i)
        {
            cin >> ages[i];
        }
        sort(ages.begin(), ages.end());

        for (int i = 0; i < t; ++i)
        {
            cout << ages[i] << " ";
        }
        cout << endl;
    }

    return 0;
}