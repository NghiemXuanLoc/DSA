#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dem[1000001];
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    ll cnt = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        auto index1 = lower_bound(a + i + 1, a + n, k - a[i]);
        // index1 vi tri xuat hien dau tien cua k - a[i]
        auto index2 = upper_bound(a + i + 1, a + n, k - a[i]);
        // index2 vi tri xuat hien cuoi cung cua k - a[i];
        if (*index1 == k - a[i])
        {
            --index2;
            if (*index2 == k - a[i])
            {
                cnt += index2 - index1 + 1;
            }
        }
    }
    cout << cnt << endl;
}