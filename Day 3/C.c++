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

    double max_distance = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        max_distance = max(max_distance, double(lanterns[i + 1] - lanterns[i]));
    }

    max_distance = max(max_distance, double(lanterns[0]));
    max_distance = max(max_distance, double(l - lanterns[n - 1]));

    double min_radius = max_distance / 2.0;

    cout << fixed << setprecision(10) << min_radius << endl;

    return 0;
}
