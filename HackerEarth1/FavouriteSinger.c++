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
/*
Problem
Bob has a playlist of
 songs, each song has a singer associated with it (denoted by an integer)

Favourite singer of Bob is the one whose songs are the most on the playlist

Count the number of Favourite Singers of Bob

Input Format

The first line contains an integer
, denoting the number of songs in Bob's playlist.

The following input contains
 integers,
 integer denoting the singer of the
 song.

Output Format

Output a single integer, the number of favourite singers of Bob

Note: Use 64 bit data type

Constraints


Sample Input
5
1 1 2 2 4
Sample Output
2
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
In this example
Songs of singer 1 and 2 appear 2 times(which is max) in this playlist
Therefore the answer is 2


*/