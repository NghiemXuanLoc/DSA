#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int dem[3] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    int cnt = 0;           // dem so cay phi lao con song, bo nho tap
    int max_val = INT_MIN; // dem so cay phi lao con song lon nhat

    for (int i = 0; i < k; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
    }
    max_val = cnt;
    for (int i = k; i < n; i++)
    {
        if (a[i - k] == 1)
        {
            cnt--;
        }
        if (a[i] == 1)
        {
            cnt++;
        }
        max_val = max(cnt, max_val);
    }
    if (dem[1] >= k)
    {
        cout << k - max_val << endl;
    }
    else
        cout << -1 << endl;
}