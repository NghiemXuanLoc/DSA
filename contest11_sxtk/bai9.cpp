// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// bool binary1(int a[], int n, int x)
// {
//     int l = 0, r = n - 1, ok = 1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (a[m] == x)
//         {
//             return true;
//         }
//         else if (a[m] > x)
//         {
//             l = m + 1;
//         }
//         else
//             r = m - 1;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         if (binary1(a, n, x))
//         {
//             cout << "YES" << endl;
//         }else cout << "NO" << endl;

//     }
// }

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         auto it = lower_bound(a, a + n, x);
//         if ((it != a + n) &&( *it == x))
//         {
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
// }


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (binary_search(a, a + n, x))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}