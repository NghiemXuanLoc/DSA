#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

ll tong[10000005];

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], index = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    tong[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        tong[i] = tong[i - 1] + a[i];
    }
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    for (int i = k; i < n; i++)
    {
        if ((tong[i + k - 1] - tong[i - 1]) > sum)
        {
            index = i;
            sum = tong[i + k - 1] - tong[i - 1];
        }
    }

    cout << sum << endl;
    for (int i = index; i < k + index; i++)
    {
        cout << a[i] << " ";
    }
}
