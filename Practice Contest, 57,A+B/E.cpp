#include <bits/stdc++.h>
using namespace std;
long long calculate_f(long long n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return -((n + 1) / 2);
    }
}

int main()
{
    long long n;
    cin >> n;

    cout << calculate_f(n) << endl;

    return 0;
}
