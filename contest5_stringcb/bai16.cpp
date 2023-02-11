#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = s, g = s;
    sort(t.begin(), t.end());
    sort(g.begin(), g.end(), greater<char>());
    for (auto x : t)
    {
        cout << x;
    }
    cout << endl;
    for (auto x : g)
    {
        cout << x;
    }
}