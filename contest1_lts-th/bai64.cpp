#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// kiem tra so nhap vao co phai la so fibonacci hay khong
ll a[100];
int cnt = 3;

bool check(ll n)
{
    ll f2 = 0, f1 = 1;
    if (n == f2)
        return true;
    if (n == f1)
        return true;
    while (a[cnt -1] <= n)
    {
        ll fn = f2 + f1;
        if (fn == n)
            return true;
        a[cnt++] = fn;
        f2 = f1;
        f1 = fn;
    }
    return false;
}

int main()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}