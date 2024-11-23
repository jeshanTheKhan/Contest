#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;

    deque<int> dp;
    string queery;
    while (t--)
    {
        cin >> queery;

        if (queery == "push_back")
        {
            cin >> x;
            dp.push_back(x);
        }
        else if (queery == "push_front")
        {
            cin >> x;
            dp.push_front(x);
        }
        else if (queery == "pop_front")
        {
            dp.pop_front();
        }
        else if (queery == "pop_back")
        {
            dp.pop_back();
        }
        else if (queery == "front")
        {
            cout << dp.front() << endl;
        }
        else if (queery == "back")
        {
            cout << dp.back() << endl;
        }
        else if (queery == "print")
        {
            int x;
            cin >> x;
            cout << dp[x - 1] << endl;
        }
    }

    return 0;
}

