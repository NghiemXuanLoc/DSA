#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, ok, a[100];
string s;

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
        s[i] = '1';
}
int main()
{
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n / 2; i++)
    {
        ok = 1;
        s = string(i, '0');
        while (ok)
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            v.push_back(s + temp);
            sinh();
        }
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
}
