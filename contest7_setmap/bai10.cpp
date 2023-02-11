
#include <iostream>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    set<int> se1, se2, se3;
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
    int c = min(se1.size(), se2.size());
    if (c == se1.size())
    {
        for (auto x : se1)
        {
            if (se2.find(x) != se2.end())
            {
                cout << x << " ";
            }
        }
    }
    else
    {
        for (auto x : se2)
        {
            if (se1.find(x) != se1.end())
            {
                cout << x << " ";
            }
        }
    }
    cout << endl;

    for (auto x : se1)
    {
        se3.insert(x);
    }
    for (auto x : se2)
    {
        se3.insert(x);
    }
    for (auto x : se3)
    {
        cout << x << " ";
    }
}