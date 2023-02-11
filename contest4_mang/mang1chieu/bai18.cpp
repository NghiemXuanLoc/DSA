#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;

int dem[1000005];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]] > 1)
        {
            cnt += 1ll * dem[a[i]] * (dem[a[i]] - 1) / 2;
            dem[a[i]] = 0;
        }
    }
    cout << cnt << endl;
}