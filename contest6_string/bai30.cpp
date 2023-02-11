#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cpm(string a, string b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main()
{
    string s;
    cin >> s;
    s += "@";
    vector<string> v;
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            temp += s[i];
        }
        else
        {
            while (temp.size() > 1 && temp[0] == '0')
            {
                temp.erase(0, 1);
            }
            if (temp != "")
            {
                v.push_back(temp);
            }
            temp = "";
        }
    }
    sort(v.begin(), v.end(), cpm);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
