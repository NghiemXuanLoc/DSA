#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        int temp = n;
        while (a[i] > a[temp])
        {
            temp--;
        }
        swap(a[i], a[temp]);
        sort(a + i + 1, a + n + 1);
    }
}

int main()
{
    cin >> n;
    vector<vector<int>> v;
    ktao();
    while (!final)
    {
        vector<int> v2;
        for (int i = 1; i <= n; i++)
        {
            v2.push_back(a[i]);
        }
        v.push_back(v2);
        sinh();
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}