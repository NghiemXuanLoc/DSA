#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0, l = 0, index = -1, ans = INT_MAX;
    int dem1[256] = {0}, dem2[256] = {0};
    for (int i = 0; i < t.size(); i++)
    {
        dem2[t[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        dem1[s[i]]++;
        if (dem1[s[i]] <= dem2[s[i]])
        {
            cnt++;
        }
        if (cnt == t.size())
        {
            while (dem1[s[l]] > dem2[s[l]] || dem2[s[l]] == 0)
            {
                if (dem1[s[l]] > dem2[s[l]])
                {
                    dem1[s[l]]--;
                }
                l++;
            }
            if (ans > i - l + 1)
            {
                ans = i - l + 1;
                index = l;
            }
        }
    }
    if (index == -1)
    {
        cout << "-1" << endl;
    }
    else
        cout << s.substr(index, ans) << endl;
}