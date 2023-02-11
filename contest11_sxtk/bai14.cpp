#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    ll sua = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - cnt > 0)
        {
            sua += a[i] - cnt;
            cnt++;
        }
        else
            break;
    }
    cout << sua << endl;
}