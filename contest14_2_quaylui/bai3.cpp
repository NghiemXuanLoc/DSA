#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int a[100][100], n, ok = 1;
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        ok = 0;
        cout << s << endl;
        return;
    }
    if (a[i + 1][j] && i + 1 <= n)
    {
        a[i + 1][j] = 0;
        s += 'D';
        Try(i + 1, j, s);
        a[i + 1][j] = 1;
        s.pop_back();
    }

    if (a[i][j + 1] && j + 1 <= n)
    {
        a[i][j + 1] = 0;
        s += 'R';
        Try(i, j + 1, s);
        a[i][j + 1] = 1;
        s.pop_back();
    }

    if (a[i][j - 1] && j - 1 >= 1)
    {
        a[i][j - 1] = 0;
        s += 'R';
        Try(i, j - 1, s);
        a[i][j + 1] = 1;
        s.pop_back();
    }
}

int main()
{
}
