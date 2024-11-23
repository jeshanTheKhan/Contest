#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int array[T];
    for (int i = 0; i < T; i++)
    {
        cin >> array[i];
    }

    for (int i = T-1; i >= 0; --i)
    {
        cout << array[i] << " ";
    }

    return 0;
}