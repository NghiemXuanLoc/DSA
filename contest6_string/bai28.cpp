#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cpm(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
        return a < b;
}

int main()
{
    string s;
    cin >> s;
    s += "a";
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
    cout << v[v.size() - 1] << endl;
}