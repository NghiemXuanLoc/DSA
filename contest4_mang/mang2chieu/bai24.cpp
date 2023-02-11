// cach 2 dung mang danh dau 

#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;
using ll = long long;
int dem[105];

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        set<int> se;
        for (int j = 0; j < n; j++)
        {
            se.insert(a[i][j]);
        }
        for (auto x : se)
        {
            dem[x]++;
        }
    }
    int ok = 1;
    for (int i = 0; i < 105; i++)
    {
        if (dem[i] == n)
        {
            cout << i << " ";
            ok = 0;
        }
    }
    if(ok) cout << "NOT FOUND" << endl;
}