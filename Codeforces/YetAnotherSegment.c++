#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Segment
{
    int left, right;
};

bool compareSegments(const Segment &a, const Segment &b)
{
    return a.right < b.right;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<Segment> segments(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> segments[i].left >> segments[i].right;
        }

        // Sort segments based on the right endpoint
        sort(segments.begin(), segments.end(), compareSegments);

        int ans = 1; // At least one segment will be in the subset
        int lastRight = segments[0].right;

        for (int i = 1; i < n; ++i)
        {
            if (segments[i].left > lastRight)
            {
                // Non-intersecting segment found
                ++ans;
                lastRight = segments[i].right;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
