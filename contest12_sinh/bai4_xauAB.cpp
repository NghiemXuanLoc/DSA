#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
bool final = false;

void sinh()
{
    int i = n;
    while (a[i] == 1 && i >= 1)
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

int main()
{
    cin >> n;
    while (!final)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 0)
            {
                cout << 'B';
            }
            else
                cout << 'A';
        }
        sinh();
        cout << endl;
    }
}