// // cach 1 dung 2 con tro

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
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] + a[r] == k)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (a[l] + a[r] >= k)
        {
            r--;
        }
        else
            l++;
    }
    cout << "NO" << endl;
}
// cach 2 dung map

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         mp[a[i]]++;
//     }
//     int ok = 0;
//     for (int i = 0; i <= k / 2; i++)
//     {
//         int l = i, r = k - i;
//         if (l == r && mp[l] >= 2)
//         {
//             ok = 1;
//         }
//         else if (l != r && mp[l] && mp[r])
//         {
//             ok = 1;
//         }
//     }
//     if (ok)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
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
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] + a[r] == k)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (a[l] + a[r] >= k)
        {
            r--;
        }
        else
            l++;
    }
    cout << "NO" << endl;
}