#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, a[1001];

void hoanvi()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int temp = n - 1;
    while (temp >= 0 && a[temp] > a[temp + 1])
    {
        temp--;
    }
    if (temp == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        int res = n;
        while (a[temp] > a[res])
        {
            res--;
        }
        swap(a[temp], a[res]);
        reverse(a + temp + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    hoanvi();
    return 0;
}
