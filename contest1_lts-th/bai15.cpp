#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

bool snt(ll n)
{
    ll cnt = 0, dem = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            dem++;
        }
    }
    if (n > 1)
    {
        cnt++;
    }
    return cnt == 3 && dem == 3;
}

int main()
{
    ll n;
    cin >> n;
    cout << snt(n) << endl;
}