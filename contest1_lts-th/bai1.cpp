
// #include <iostream>
// #include <algorithm>
// #include <math.h>

// using namespace std;

// bool check(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return n > 1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (check(n))
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
const int mod = 1e9 + 7;

int main()
{
    set<char> se;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        se.insert(s[i]);
    }
    for(auto x : se) cout << x << " ";
}
