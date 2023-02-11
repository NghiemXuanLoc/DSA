#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s += s[s.size() - 1];
    int cnt = 1, res = 1;
    string temp = "", ans = "";
    ans += s[0];
    temp += s[0];
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            temp += s[i + 1];
            res++;
        }
        else
        {
            if (res > cnt)
            {
                cnt = res;
                ans = temp;
            }
            else if (res == cnt)
            {
                if (temp > ans)
                {
                    ans = temp;
                }
            }
            res = 1;
            temp = "";
            temp += s[i + 1];
        }
    }
    cout << ans << endl;
}