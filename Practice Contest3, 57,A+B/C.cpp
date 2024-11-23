#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    double max_dist = 0;

    for (int i = 1; i < n; ++i)
    {
        max_dist = max(max_dist, (double)(lanterns[i] - lanterns[i - 1]) / 2);
    }

    max_dist = max(max_dist, (double)lanterns[0]);
    max_dist = max(max_dist, (double)(l - lanterns[n - 1]));

    cout << fixed << setprecision(10) << max_dist << endl;

    return 0;
}
