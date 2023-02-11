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
//     int l = 0, r = 0;
//     int m = 0;
//     while (l < n - 2)
//     {
//         r = l + 1;
//         m = r + 1;
//         while (r < n - 1)
//         {
//             if (a[l] + a[r] + a[m] == k)
//             {
//                 cout << "YES" << endl;
//                 return 0;
//             }
//             m++;
//             if (m == n)
//             {
//                 r++;
//                 m = r + 1;
//             }
//         }
//         l++;
//     }
//     cout << "NO" << endl;
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
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == k)
            {
                cout << "YES" << endl;
                return 0;
            }
            else if (a[l] + a[r] + a[i] >= k)
            {
                r--;
            }
            else
                l++;
        }
    }
    cout << "NO" << endl;
}