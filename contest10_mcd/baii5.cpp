#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, s;
    cin >> n >> s;
    ll sum = 0;
    int cnt = 0, res = INT_MAX, temp = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt++;
        // cout << cnt << " ";
        if (sum >= s)
        {
            // cnt++;
            if (res > cnt)
            {
                res = cnt;
            }
            i = temp;
            sum = a[i];
            if (sum >= s)
            {
                cout << 1 << endl;
                return 0;
            }
            else
                cnt = 1;
            temp++;
        }
    }
    if (res != INT_MAX)
    {
        cout << res << endl;
    }
    else
        cout << "-1" << endl;
}