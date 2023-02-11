// #include <iostream>
// #include <set>

// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[m];
//     set<int> c, d, e;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         c.insert(a[i]);
//         e.insert(a[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//         d.insert(b[i]);
//         e.insert(b[i]);
//     }
//     int min_val = min(c.size(), d.size());
//     if (min_val == c.size())
//     {
//         for (auto x : c)
//         {
//             if (d.find(x) != d.end())
//             {
//                 cout << x << " ";
//             }
//         }
//     }
//     else
//     {
//         for (auto x : d)
//         {
//             if (c.find(x) != c.end())
//             {
//                 cout << x << " ";
//             }
//         }
//     }
//     cout << endl;
//     for (auto x : e)
//     {
//         cout << x << " ";
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dem1[10000005];
int dem2[10000005];
int a[10000005], b[10000005];
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem1[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        dem2[b[i]]++;
    }

    for (int i = 0; i < 1000005; i++)
    {
        if (dem1[i] && dem2[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 1000005; i++)
    {
        if (dem1[i] || dem2[i])
        {
            cout << i << " ";
        }
    }
}