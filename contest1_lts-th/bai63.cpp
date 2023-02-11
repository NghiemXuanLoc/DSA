#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1000005];
int cnt = 3;
// ham sinh so fibonacci thu k

void fibo(int n)
{
    int temp = 1000000007;
    ll f2 = 0, f1 = 1;
    a[1] = f2, a[2] = f1;
    while (cnt <= n)
    {
        ll fn = f1 + f2;
        fn %= temp;
        a[cnt++] = fn;
        f2 = f1;
        f2 %= temp;
        f1 = fn;
        f1 %= temp;
    }
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
    cout << a[n] << endl;
}