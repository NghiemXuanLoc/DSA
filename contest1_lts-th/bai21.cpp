#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long;
int main()
{
    ll a, b;
    cin >> a >> b;
    
    int x = sqrt(a);
    ll y = 1ll * x * x;
    if (y == a)
    {
        cout << a << " ";
    }
    
    for (int i = sqrt(a) + 1; i <= sqrt(b); i++)
    {
        cout << 1ll * i * i << " ";
    }
}