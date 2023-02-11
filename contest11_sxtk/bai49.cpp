#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int n, k;
int a[10001];
bool check(double res)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += a[i] / res;
    }
    return cnt >= k;
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double l = 0, r =20000000;
    double res;
    int temp = 100;
    while (temp--)
    {
        double m = (double)(l + r) / 2;
        if (check(m))
        {
            res = m;
            l = m;
        }
        else
            r = m;
    }
    cout << fixed << setprecision(6) << res << endl;
}