// // hai con tro

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int l = 0, cnt = 0;
//     ll sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//         while (sum >= x)
//         {
//             if (sum == x)
//             {
//                 cnt++;
//             }
//             sum -= a[l++];
//         }
//     }
//     cout << cnt << endl;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    map<ll, bool> mp;
    ll sum = 0, cnt = 0;
    mp[0] = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (mp.find(sum - k) != mp.end())
        {
            cnt++;
        }
        mp[sum] = true;
    }
    cout << cnt << endl;
}