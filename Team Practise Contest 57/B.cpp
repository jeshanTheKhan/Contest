#include <bits/stdc++.h>
using namespace std;

bool isCorrect(const string &str)
{
    stack<char> stk;

    for (char c : str)
    {
        if (c == '(' || c == '[')
        {
            stk.push(c);
        }
        else if (c == ')' || c == ']')
        {
            if (stk.empty())
                return false;
            char top = stk.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '['))
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return stk.empty();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        string str;
        getline(cin, str);
        if (isCorrect(str))
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
