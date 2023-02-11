#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int a[1001];

int main()
{
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 1; i <= s.size(); i++)
    {
        string x = "";
        x += s[i - 1];
        a[i] = stoi(x);
    }
    int temp = s.size();

    while (temp >= 1 && a[temp] == 1)
    {
        a[temp] = 0;
        temp--;
    }
    if (temp != 0)
    {
        a[temp] = 1;
    }

    for (int i = 1; i <= s.size(); i++)
    {
        cout << a[i];
    }
}