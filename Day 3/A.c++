#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        vector<int> nums(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> nums[i];
        }

        int count = 0;
        for (int i = 0; i < N - 1; ++i)
        {
            for (int j = 0; j < N - i - 1; ++j)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    count++;
                }
            }
        }

        cout << "Minimum exchange operations : " << count << endl;
    }
    return 0;
}
