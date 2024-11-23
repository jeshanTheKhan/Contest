#include <bits/stdc++.h>

using namespace std;

int calculateMaxBorder(vector<vector<char>> &matrix, int rows, int cols)
{
    int maxBorder = 0;

    // Traverse rows
    for (int i = 0; i < rows; ++i)
    {
        int count = 0;
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] == '#')
            {
                ++count;
            }
            else
            {
                maxBorder = max(maxBorder, count);
                count = 0;
            }
        }
        maxBorder = max(maxBorder, count);
    }

    // Traverse columns
    for (int j = 0; j < cols; ++j)
    {
        int count = 0;
        for (int i = 0; i < rows; ++i)
        {
            if (matrix[i][j] == '#')
            {
                ++count;
            }
            else
            {
                maxBorder = max(maxBorder, count);
                count = 0;
            }
        }
        maxBorder = max(maxBorder, count);
    }

    return maxBorder;
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int rows, cols;
        cin >> rows >> cols;

        vector<vector<char>> matrix(rows, vector<char>(cols));
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        cout << calculateMaxBorder(matrix, rows, cols) << endl;
    }

    return 0;
}
