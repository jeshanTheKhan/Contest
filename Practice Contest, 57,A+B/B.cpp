#include <bits/stdc++.h>
using namespace std;

void findBooks(vector<int> &prices, int money)
{
    unordered_set<int> seen;
    int book1 = -1, book2 = -1;
    int minDiff = INT_MAX;

    for (int price : prices)
    {
        int complement = money - price;
        if (seen.find(complement) != seen.end())
        {
            if (abs(complement - price) < minDiff)
            {
                book1 = min(price, complement);
                book2 = max(price, complement);
                minDiff = abs(complement - price);
            }
        }
        seen.insert(price);
    }

    cout << "Peter should buy books whose prices are " << book1 << " and " << book2 << "." << endl;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> prices(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> prices[i];
        }
        int money;
        cin >> money;

        findBooks(prices, money);

        cout << endl; // Blank line after each test case
    }
    return 0;
}
