#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    set<int> se1;
    set<int> se2;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se1.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        se2.insert(b[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (se2.find(a[i]) == se2.end())
    //     {
    //         cout << a[i] << " ";
    //         se2.insert(a[i]);
    //     }
    // }
    for (auto x : se1)
    {
        if (se2.count(x) == 0)
        {
            cout << x << " ";
        }
    }
}