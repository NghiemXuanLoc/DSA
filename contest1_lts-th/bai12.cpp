#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

void snt(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        ll cnt = 0, res;

        while (n % i == 0)
        {
            cnt++;
            res = i;
            n /= i;
        }
        if (cnt >= 1)
        {
            cout << res << '^' << cnt;
        }

        if (n != 1 && cnt)
        {
            cout << " * ";
        }
    }
    if (n > 1)
    {
        cout << n << '^' << 1 << endl;
    }
}

int main()
{
    ll n;
    cin >> n;
    snt(n);
}