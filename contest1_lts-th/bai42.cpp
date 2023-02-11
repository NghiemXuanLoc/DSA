#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ll res = 0;
        int temp = i * i;
        res = 1ll * temp * (temp - 1) / 2 - (i - 1) * (i - 2) * 4;
        cout << res << endl;
    }
}