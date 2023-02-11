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
    string temp = "88";
    string ans = "6666";
    if (s.find(temp) == string::npos && s.find(ans) == string::npos)
    {
        return s[0] == '8' && s[s.size() - 1] == '6';
    }
    else
        return false;
}

int main()
{
    cin >> n;
    while (!final)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                s += to_string(6);
            }
            else
                s += to_string(8);
        }
        if (check(s))
        {
            cout << s << endl;
        }

        sinh();
    }
}