#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,N;
    cin >> T;

    for (int i = 1; i <= T; i++) {
       
        cin >> N;

        double totalGPA = 0.0;
        for (int i = 0; i < N; i++) {
            double gradePoint;
            cin >> gradePoint;
            totalGPA += gradePoint;
        }

        double GPA = totalGPA / N;

        cout << fixed << setprecision(3);
        cout << "Case " << i << ": " << GPA << endl;
    }

    return 0;
}
