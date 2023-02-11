#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    int l = *se.begin(), r = *se.rbegin();
    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        if (se.find(i) == se.end())
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}