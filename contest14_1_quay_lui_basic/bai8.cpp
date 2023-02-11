// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;
// const int mod = 1e9 + 7;

// int n, a[15], res[15], mau[15], cnt, ans;
// void nhap()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> mau[i];
//     }
// }

// void hoanvi(int i)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (res[j] == 0)
//         {
//             res[j] = 1;
//             a[i] = j;
//             if (i == n)
//             {
//                 cnt++;
//                 int temp = 0;
//                 for (int pos = 1; pos <= n; pos++)
//                 {
//                     if (a[pos] == mau[pos])
//                     {
//                         temp++;
//                     }
//                 }
//                 if (temp == n)
//                 {
//                     ans = cnt;
//                     return;
//                 }
//             }
//             else
//                 hoanvi(i + 1);
//             res[j] = 0;
//         }
//     }
// }
// int main()
// {
//     nhap();
//     hoanvi(1);
//     cout << ans << endl;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, res[15], cnt, temp, ok = 0, a[15];
string s = "", ans = "";

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ans += to_string(x);
    }
}

void hoanvi(string s)
{
    for (int j = 1; j <= n; j++)
    {
        // if (res[j] == 0)
        // {
        // res[j] = 1;
        // s += to_string(j);
        if (s.size() == n)
        {
            // cnt++;
            // if (s == ans)
            // {
            //     temp = cnt;
            //     return;
            // }
            cout << s << endl;
            return;
        }
        else
            hoanvi(s + char(j + 48));
        // res[j] = 0;
        // }
    }
}
int main()
{
    nhap();
    hoanvi(s);
    cout << temp << endl;
}
