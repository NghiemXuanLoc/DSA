#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = INT_MIN, l = 0, cnt = 0;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        while (mp[s[i]] > 1)
        {
            mp[s[l++]]--;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << endl;
}