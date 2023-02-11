#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;

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

bool check(string s)
{
    string t = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        t += s[i];
    }
    return t == s;
}
int main()
{
    cin >> n;
    while (!final)
    {
        string t = "";
        for (int i = 1; i <= n; i++)
        {
            t += to_string(a[i]);
        }
        // if (check(t))
        // {
        //     cout << t << endl;
        // }
        cout << t << endl;
        sinh();
    }
}