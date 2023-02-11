#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (check(i))
        {
            cout << 1ll * i * i << " ";
        }
    }
}