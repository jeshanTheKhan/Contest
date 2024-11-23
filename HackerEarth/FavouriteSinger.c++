#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> singerCount;
    for (int i = 0; i < n; i++)
    {
        int singer;
        cin >> singer;
        singerCount[singer]++;
    }
    int maxCount = 0;
    for (const auto &pair : singerCount)
    {
        maxCount = max(maxCount, pair.second);
    }
    int favoriteSingers = 0;
    for (const auto &pair : singerCount)
    {
        if (pair.second == maxCount)
        {
            favoriteSingers++;
        }
    }

    cout << favoriteSingers << endl;

    return 0;
}