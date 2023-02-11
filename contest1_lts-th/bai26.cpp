#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// kiem tra so hoan hao
bool check(ll n)
{

    for (int i = 1; i <= 32; i++)
    {
        if (1ll * pow(2, i - 1) * (pow(2, i) - 1) == n)
        {
            return true;
        }
    }
    return false;
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