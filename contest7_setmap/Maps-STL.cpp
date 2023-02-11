#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            string x;
            int y;
            cin >> x >> y;
            if (mp.find(x) != mp.end())
            {
                mp[x] += y;
            }
            else
                mp[x] = y;
        }
        else if (temp == 2)
        {
            string x;
            cin >> x;
            if (mp.find(x) != mp.end())
            {
                mp.erase(x);
            }
        }
        else
        {
            string x;
            cin >> x;
            cout << mp[x] << endl;
        }
    }
}