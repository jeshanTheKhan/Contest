#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n)
{
    int sum = 1;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;

            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
}

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int divisorSum = sumOfDivisors(N);

        if (isPrime(divisorSum))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
