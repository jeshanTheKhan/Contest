#include <bits/stdc++.h>
using namespace std;

int minSteps(vector<int> &a, vector<int> &b, int n)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int steps = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            int diff = b[i] - a[i];
            if (diff > a[n - 1] - a[i])
            {
                return -1;
            }
            steps += diff;
        }
        else if (a[i] > b[i])
        {
            steps += a[i] - b[i];
        }
    }

    return steps;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int steps = minSteps(a, b, n);
    cout << steps << endl;

    return 0;
}