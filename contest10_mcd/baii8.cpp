// cach 1 bi time out

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     ll ans = 0, cnt = 0, temp = 0, res = 0;
//     set<int> se;
//     for (int i = 0; i < n; i++)
//     {
//         se.insert(a[i]);
//         while (se.size() > k)
//         {
//             if (i > res)
//             {
//                 res = i;
//             }
//             se.clear();
//             i = temp++;
//         }
//         if (i >= res)
//         {
//             ans += i - temp + 1;
//         }
//     }
//     cout << ans << endl;
// }

// cach so 2 dung map

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
    ll ans = 0, cnt = 0, l = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp[a[i]] == 1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }
        ans += i - l + 1;
    }
    cout << ans << endl;
    return 0;
}