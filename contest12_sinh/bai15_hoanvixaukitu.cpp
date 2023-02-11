#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    set<char> se;
    for (int i = 0; i < s.size(); i++)
    {
        se.insert(s[i]);
    }
    s = "";
    for (auto x : se)
        s += x;
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}