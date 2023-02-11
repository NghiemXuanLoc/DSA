// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     int a[n], b[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     sort(a, a + n);
//     sort(b, b + m);
//     int i = 0, j = 0;
//     int cnt = 0;
//     while (i < n && j < m)
//     {
//         if (abs(a[i] - b[j]) <= k)
//         {
//             cnt++;
//             i++;
//             j++;
//         }
//         else
//         {
//             if (a[i] > b[j])
//             {
//                 j++;
//             }
//             else
//                 i++;
//         }
//     }
//     cout << cnt << endl;
// }

// cach 2 dung lower_bound

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = ms.lower_bound(a[i]); // tim vi tri dau tien >= a[i]
        if ((it != ms.end()))
        {
            if ((abs((*it) - a[i]) <= k))
            {
                cnt++;
                ms.erase(it);
            }
        }
        else
        {
            it--;
            if (abs(*it - a[i]) <= k)
            {
                cnt++;
                ms.erase(it);
            }
        }
    }
    cout << cnt << endl;
}