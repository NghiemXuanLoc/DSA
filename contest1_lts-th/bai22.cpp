#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    int x = sqrt(a);
    ll y = 1ll * x * x;
    if (y == a)
    {
        cnt++;
    }
    int z = sqrt(b);
    cnt += z - (x + 1) + 1;
    cout << cnt << endl;
}