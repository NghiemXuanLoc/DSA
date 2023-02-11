#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "28tech";
    for (int i = 0; i < t.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == t[i])
            {
                s.erase(j, 1);
                j--;
            }
        }
    }
    if (s.size())
    {
        cout << s << endl;
    }
    else
        cout << "EMPTY" << endl;
}