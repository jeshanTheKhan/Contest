#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 0, s = 0;
    cin >> n;
    char word[n];
    cin >> word;
    while (i < n - 1)
    {
        if ((word[i + 1] == 'H') && (word[i] == 'H'))
        {
            s++;
        }
        i++;
    }
    if (s > 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        i = 0;
        while (i < n)
        {
            if (word[i] == '.')
            {
                word[i] = 'B';
            }
            i++;
        }
        cout << word;
    }

    return 0;
}