#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k, l = 0;
    cin >> n >> k;
    int a[n];
    map<int, int> mp;
    ll cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] == 1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }

        ans += i - l + 1;
    }
    cout << ans << endl;
}