#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k, index = 0, l = 0;
    ll sum = 0, ans = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            sum += a[i];
            ans += a[i];
        }
        else
        {
            sum += a[i];
            sum -= a[l++];
            if (sum > ans)
            {
                ans = sum;
                index = i - k + 1;
            }
        }
    }
    cout << ans << endl;
    for (int i = index; i < index + k; i++)
    {
        cout << a[i] << " ";
    }
}