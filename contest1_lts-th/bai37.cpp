#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll a, b;
    cin >> a >> b;
    int c = 1000000007;
    ll temp = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            temp *= a;
            temp %= c;
            b--;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    cout << temp << endl;
}