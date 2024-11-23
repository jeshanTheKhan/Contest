#include <bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str);
    char ch;
    int num;
    while (ss >> num)
    {
        result.push_back(num);
        ss >> ch;
    }
    return result;
}

int main()
{
    string input;
    getline(cin, input);
    vector<int> integers = parseInts(input);
    for (int num : integers)
    {
        cout << num << endl;
    }
    return 0;
}
