#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
string s;
int ok, k;
char c;

void sinh()
{
    int i = k - 1;
    while (i >= 0 && s[i] == c)
    {
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] += 1;
        for (int j = i + 1; j < k; j++)
        {
            s[j] = 'A';
        }
    }
}

int main()
{
    cin >> c >> k;
    s = string(k, 'A');
    ok = 1;
    while (ok)
    {
        cout << s << endl;
        sinh();
    }
}
