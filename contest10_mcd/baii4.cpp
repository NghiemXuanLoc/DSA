#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, s;
    int cnt = 0, res = 0, temp = 1;
    cin >> n >> s;
    int a[n + 1];
    a[n] = 1000000007;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += a[i];
        if (sum <= s)
        {
            cnt++;
        }
        else
        {
            i = temp;
            if (cnt >= res)
            {
                res = cnt;
            }
            sum = a[i];
            if (sum <= s)
            {
                cnt = 1;
            }
            else
                cnt = 0;
            temp++;
        }
        // cout << cnt << " ";
        // cout << sum << " ";
    }
    cout << res << endl;
}

