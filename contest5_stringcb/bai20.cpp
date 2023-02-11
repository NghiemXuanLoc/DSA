#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool tn(string s)
{
    string t = s;
    int l = 0, r = t.size() - 1;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t == s;
}

int main()
{
    string s;
    getline(cin, s);
    set<string> se;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        if (tn(temp))
        {
            se.insert(temp);
        }
    }
    for (auto x : se)
    {
        cout << x << " ";
    }
}