#include <iostream>

using namespace std;
using ll = long long;

int check(ll n)
{
    if (n < 10)
    {
        return n;
    }
    else
        return check(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    cout << check(n) << endl;
}