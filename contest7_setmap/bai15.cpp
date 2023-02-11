#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    multiset<int> me;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        me.insert(a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t, x;
        cin >> t;
        if (t == 1)
        {
            cin >> x;
            me.insert(x);
        }
        else if (t == 2)
        {
            cin >> x;
            auto temp = me.find(x);
            if (temp != me.end())
            {
                me.erase(temp);
            }
        }
        else if (t == 3)
        {
            cin >> x;
            vector<int> v;
            for (auto x : me)
            {
                v.push_back(x);
            }
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end())
            {
                cout << *it << endl;
            }
            else
                cout << "-1" << endl;
        }
        else
        {
            cin >> x;
            int temp = -1;
            for (auto y : me)
            {
                if (y <= x)
                {
                    temp = y;
                }
            }
            cout << temp << endl;
        }
    }
}