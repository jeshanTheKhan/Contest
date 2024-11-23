#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        unordered_set<int> distinct_elements;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            distinct_elements.insert(a[i]);
        }

        int distinct_count = distinct_elements.size();

        int min_operations = min(distinct_count - 1, x - distinct_count + 1);

        cout << min_operations << endl;
    }

    return 0;
}
