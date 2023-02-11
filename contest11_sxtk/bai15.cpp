#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) > k)
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}