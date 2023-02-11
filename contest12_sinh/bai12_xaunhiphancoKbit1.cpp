#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[100];
bool final = false;

void ktao()
{
    final = false;
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
        a[i] = 1;
}

int main()
{
    cin >> n >> k;
    vector<string> v;
    while (!final)
    {
        int cnt = 0, ok = 1, res = 0, temp = 0;
        string s = "", t = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                cnt++;
            }
            s += to_string(a[i]);
        }
        if (cnt == k)
        {
            cout << s << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            temp = 0;
            while (a[i] == 1)
            {
                temp++;
                i++;
            }
            if (temp == k)
            {
                res++;
            }
            else if (temp > k)
            {
                ok = 0;
            }
        }
        if (res == 1 && ok)
        {
            v.push_back(s);
        }
        sinh();
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}