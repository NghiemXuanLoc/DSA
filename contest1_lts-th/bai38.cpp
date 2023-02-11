#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int a[10000000];

void sang()
{
    for (int i = 0; i <= 10000000; i++)
    {
        a[i] = 1;
    }
    a[0] = a[0] = 0;
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        for (int j = i * i; j <= 10000000; j += i)
        {
            a[j] = 0;
        }
    }
}

int uoc(int n, int i)
{
    int cnt = 0, t = i;
    while (t <= n)
    {
        cnt += n / t;
        t *= i;
    }
    return cnt;
}

int main()
{
    sang();
    int n;
    cin >> n;
    ll cnt = 1;
    int c = 1000000007;
    for (int i = 2; i <= n; i++)
    {
        int temp = 0;
        if (a[i])
        {
            temp += uoc(n, i);
            cnt *= (temp + 1);
            cnt %= c;
        }
    }
    cout << cnt << endl;
}