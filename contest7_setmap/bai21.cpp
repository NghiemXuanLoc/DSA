
#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> hop;
    map<int, int> giao;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        hop.insert(x);
        giao[x] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        hop.insert(x);
        if (giao[x] == 1)
        {
            giao[x] = 2;
        }
    }
    for (auto x : giao)
    {
        if (x.second == 2)
        {
            cout << x.first << " ";
        }
    }
    cout << endl;
    for (auto x : hop)
    {
        cout << x << " ";
    }
}