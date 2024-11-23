#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int greenCost, purpleCost;
        cin >> greenCost >> purpleCost;

        int n;
        cin >> n;

        int totalCost1 = 0;
        int totalCost2 = 0;

        for (int i = 0; i < n; ++i)
        {
            int solve1, solve2;
            cin >> solve1 >> solve2;

            totalCost1 += (solve1 * greenCost + solve2 * purpleCost);

            totalCost2 += (solve1 * purpleCost + solve2 * greenCost);
        }

        //
        cout << min(totalCost1, totalCost2) << endl;
    }

    return 0;
}
