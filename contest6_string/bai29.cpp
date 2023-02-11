#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    s += '@';
    ll sum = 0;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            temp += s[i];
        }
        else
        {
            if (temp != "")
            {
                ll res = stoll(temp);
                sum += res;
            }
            temp = "";
        }
    }
    cout << sum << endl;
}