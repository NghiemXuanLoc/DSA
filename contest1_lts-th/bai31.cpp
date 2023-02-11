#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

ll check(ll n)
{
    ll cnt = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt -= cnt / i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        cnt -= cnt / n;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    cout << check(n) << endl;
}