#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int res = INT_MIN;
    int cnt2 = 0, cnt8 = 0, l = 0;
    for (int r = 0; r < s.size(); r++)
    {
        if (s[r] == '2')
        {
            cnt2++;
        }
        else
            cnt8++;
        while (cnt2 > x || cnt8 > y)
        {
            if (s[l] == '2')
            {
                cnt2--;
            }
            else
                cnt8--;
            l++;
        }

        res = max(res, r - l + 1);
    }
    cout << res << endl;
}