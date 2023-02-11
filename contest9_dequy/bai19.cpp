#include <iostream>

using namespace std;
using ll = long long;

bool check(ll n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        if (n % 10 % 2 == 0)
        {
            return check(n / 10);
        }
        else
            return false;
    }
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