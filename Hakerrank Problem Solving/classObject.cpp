#include <iostream>
#include <vector>

using namespace std;

class Student {
private:
    vector<int> scores;

public:
    void input() {
        int score;
        for (int i = 0; i < 5; ++i) {
            cin >> score;
            scores.push_back(score);
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n;
    cin >> n;

    Student kristen;
    kristen.input();
    int kristenTotal = kristen.calculateTotalScore();

    int countHigher = 0;
    for (int i = 1; i < n; ++i) {
        Student otherStudent;
        otherStudent.input();
        int otherTotal = otherStudent.calculateTotalScore();
        if (otherTotal > kristenTotal) {
            ++countHigher;
        }
    }

    cout << countHigher << endl;

    return 0;
}
