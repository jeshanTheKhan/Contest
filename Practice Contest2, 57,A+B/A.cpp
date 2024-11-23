#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (bracket == '(' || bracket == '[' || bracket == '{')
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            if ((bracket == ')' && top != '(') ||
                (bracket == ']' && top != '[') ||
                (bracket == '}' && top != '{'))
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string input;
    cin >> input;
    if (isValid(input))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
