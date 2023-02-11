#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100], dem;
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
        int temp = dem - i + 1; // tinh xem da mat di bao nhieu don vi
        a[i]--;
        dem = i;
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
    while (!final)
    {
        for (int i = 1; i <= dem; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}