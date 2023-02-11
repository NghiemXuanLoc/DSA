#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
int ok;

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
        s[i] = '8';
}
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= 15; i++)
    {
        s = string(i, '6');
        ok = 1;
        while (ok)
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            v.push_back(s + temp);
            sinh();
        }
    }
    int cnt = 0;
    for (int i = 0; i <= v.size(); i++)
    {
        cout << v[i] << " ";
        cnt++;
        if (cnt == n)
        {
            break;
        }
        }
    return 0;
}
