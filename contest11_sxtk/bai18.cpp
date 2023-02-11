// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// // tim vi tri cuoi cung cua phan tu < x;
// int start(int a[],int l, int r, int x)
// {
//     int ok = -1;

//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (a[m] < x)
//         {
//             ok = m;
//             l = m + 1;
//         }
//         else
//             r = m - 1;
//     }
//     return ok;
// }

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     ll cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int temp = start(a, i + 1, n - 1, k - a[i]);
//         if (temp != -1)
//         {
//             cnt += temp - i;
//         }
//     }
//     cout << cnt << endl;
// }

// cach so 2 dung lower_bound

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
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        auto it = lower_bound(a + i + 1, a + n, k - a[i]);
        if (it != a)
        {
            it--;
            temp = it - a;
            cnt += temp - i;
        }
    }
    cout << cnt << endl;
}