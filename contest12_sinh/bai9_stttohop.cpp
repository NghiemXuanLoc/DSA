#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[100], cnt = 0, res;
bool final = false;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    cin >> n >> k;
    int ans[k];
    string s = "";
    for (int i = 0; i < k; i++)
    {
        cin >> ans[i];
        s += to_string(ans[i]);
    }

    ktao();
    while (!final)
    {
        string temp = "";
        for (int i = 1; i <= k; i++)
        {
            temp += to_string(a[i]);
        }
        cnt++;
        if (temp == s)
        {
            res = cnt;
        }
        sinh();
    }
    cout << cnt - res + 1 << endl;
}