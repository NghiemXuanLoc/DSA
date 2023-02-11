#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
string a[100];
bool final = false;

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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (!final)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}