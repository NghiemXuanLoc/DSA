#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[100];
bool final = false;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 1;
    }
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n)
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
            a[j] = 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    ktao();
    while (!final)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}