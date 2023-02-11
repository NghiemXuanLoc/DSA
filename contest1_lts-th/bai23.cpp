#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            sum += n / i;
        }
    }
    int x = sqrt(n);
    ll y = 1ll * x * x;
    if (y == n)
    {
        sum -= x;
    }
    cout << sum << endl;
}