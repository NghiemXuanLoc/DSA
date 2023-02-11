#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

bool check(ll n)
{
    int x = sqrt(n);
    ll y = 1ll * x * x;
    return n == y;
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