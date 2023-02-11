#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, cnt = 0, ans = 0;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum >= s)
        {
            ans += n - i;
            i = temp;
            temp++;
            sum = a[i];
        }
    }
    cout << ans << endl;
}