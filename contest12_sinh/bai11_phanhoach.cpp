#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// using ll = long long;

int n, dem, a[100];
bool final = false;

void ktao()
{
    dem = 1;
    a[1] = n;
}

void sinh()
{
    int i = dem;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
    {
        int temp = dem - i + 1;
        dem = i;
        a[i]--;
        int q = temp / a[i], r = temp % a[i];
        for (int j = 0; j < q; j++)
        {
            a[++dem] = a[i];
        }
        if (r != 0)
        {
            a[++dem] = r;
        }
    }
}

int main()
{
    cin >> n;
    ktao();
    int cnt = 0;
    while (!final)
    {
        cnt++;
        sinh();
    }
    cout << cnt << endl;
    final = false;
    ktao();
    while (!final)
    {
        for (int i = 1; i <= dem; i++)
        {
            cout << a[i];
            if (i < dem)
            {
                cout << '+';
            }
        }
        cout << endl;
        sinh();
    }
}