#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    set<char> se;
    set<char> se2;
    int l = 0, min_val = INT_MAX;
    for (int i = 0; i < s.size(); i++)
    {
        se.insert(s[i]);
    }
    for (int r = 0; r < s.size(); r++)
    {
        se2.insert(s[r]);
        if (se2.size() == se.size())
        {
            int temp = r - l + 1;
            min_val = min(temp, min_val);
            se2.clear();
            r = l++;
        }
    }

    cout << min_val << endl;
}