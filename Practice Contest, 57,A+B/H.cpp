#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        vector<int> numbers(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> numbers[i];
        }

        int flips = 0;
        for (int i = 0; i < N - 1; ++i)
        {
            for (int j = 0; j < N - i - 1; ++j)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    swap(numbers[j], numbers[j + 1]);
                    flips++;
                }
            }
        }

        cout << "Minimum exchange operations : " << flips << endl;
    }

    return 0;
}
