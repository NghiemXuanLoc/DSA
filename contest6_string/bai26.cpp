#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    s += "@";
    int index = 0, cnt = 1, temp = 1;
    char ans = s[0];
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            temp++;
        }
        else
        {
            if (temp > cnt)
            {
                cnt = temp;
                index = (i + 1) - temp;
                ans = s[i];
            }
            else if (temp == cnt)
            {
                if (s[i] >= ans)
                {
                    cnt = temp;
                    index = (i + 1) - temp;
                    ans = s[i];
                }
            }

            temp = 1;
        }
    }
    for (int i = index; i < index + cnt; i++)
    {
        cout << s[i];
    }
    cout << endl;
}