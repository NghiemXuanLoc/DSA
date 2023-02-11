// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int l = 0, r = 0, min_len = INT_MAX, start = 0, over = 0;
//     long long sum = 0;
//     while (r < n)
//     {
//         sum += a[r];
//         while (sum >= k)
//         {
//             if (min_len > r - l + 1)
//             {
//                 min_len = r - l + 1;
//                 start = l;
//                 over = r;
//             }
//             sum -= a[l++];
//         }
//         r++;
//     }
//     if (min_len == INT_MAX)
//     {
//         cout << -1 << endl;
//     }
//     else
//         for (int i = start; i <= over; i++)
//         {
//             cout << a[i] << " ";
//         }
// }

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
    int l = 0, ans = INT_MAX, start = 0, over = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum >= k)
        {
            if (ans > i - l + 1)
            {
                ans = i - l + 1;
                start = l;
                over = i;
            }
            sum -= a[l++];
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = start; i < over + 1; i++)
        {
            cout << a[i] << " ";
        }
    }
}