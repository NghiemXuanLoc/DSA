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
//     int max_val = 1, temp = 1, ans = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i - 1] == a[i])
//         {
//             temp++;
//         }
//         else
//         {
//             if (temp > max_val)
//             {
//                 max_val = temp;
//                 ans = a[i - 1];
//             }
//             temp = 1;
//         }
//     }
//     if (a[n - 1] == a[n - 2])
//     {
//         if (temp > max_val)
//         {
//             max_val = temp;
//             ans = a[n - 1];
//         }
//     }

//     cout << ans << " " << max_val << endl;
// }
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > res)
        {
            res = a[i];
        }
        }
    a[n] = res + 1;
    sort(a, a + n + 1);
    int max_val = 1, temp = 1, ans = a[0];
    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] == a[i])
        {
            temp++;
        }
        else
        {
            if (temp > max_val)
            {
                max_val = temp;
                ans = a[i - 1];
            }
            temp = 1;
        }
    }

    cout << ans << " " << max_val << endl;
}