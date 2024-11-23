#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j=j+2)
        {
            if (a[j] < a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }

    cout << a << endl;
    return 0;
}