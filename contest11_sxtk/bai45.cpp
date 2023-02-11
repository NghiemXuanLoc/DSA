#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    ll ans = 0, cnt = 0, l = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        while (mp[a[i]] > 1)
        {
            mp[a[l]]--;
            l++;
           
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << endl;
}