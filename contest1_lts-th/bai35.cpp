#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    ll c = gcd(a, b);
    if (a > b)
    {
        a /= c;
        return a * b;
    }
    else
    {
        b /= c;
        return a * b;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}