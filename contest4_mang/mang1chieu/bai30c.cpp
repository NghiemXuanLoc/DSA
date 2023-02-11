#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll k1 = 0, k2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i < min(k, n - k))
        {
            k1 += a[i];
        }
        else
            k2 += a[i];
    }
    cout << k2 - k1;
}