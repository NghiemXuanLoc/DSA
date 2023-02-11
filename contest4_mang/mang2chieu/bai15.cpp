#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

// ham sinh so fibonacci

ll a[100];
int res = 2;

void fibo()
{
    a[0] = 0, a[1] = 1;
    int cnt = 80;

    ll fn2 = a[0], fn1 = a[1];
    while (cnt--)
    {
        ll fn = fn2 + fn1;
        a[res++] = fn;
        fn2 = fn1;
        fn1 = fn;
    }
}

int main()
{
    int n;
    cin >> n;
    ll b[n][n];
    fibo();
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    int cnt = 0;
    while (cnt < n * n)
    {
        for (int i = c1; i <= c2; i++)
        {
            b[h1][i] = a[cnt++];
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            b[i][c2] = a[cnt++];
        }
        c2--;
        for (int i = c2; i >= c1; i--)
        {
            b[h2][i] = a[cnt++];
        }
        h2--;
        for (int i = h2; i >= h1; i--)
        {
            b[i][c1] = a[cnt++];
        }
        c1++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}