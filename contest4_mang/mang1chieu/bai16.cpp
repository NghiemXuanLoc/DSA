#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;

ll check(int b, int c)
{
    ll kq1 = 1ll * pow(b, 2);
    ll kq2 = 1ll * pow(c, 2);
    ll kq = kq1 + kq2;
    return kq;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int dem = 0;
   

    for (int i = 0; i < n - 2; i++)
    {
        ll kq = 1ll * a[i] * a[i];
        for (int j = i + 2; j < n; j++)
        {
            ll temp = check(a[i + 1], a[j]);
            if (kq == temp)
            {
                dem++;
            }

        }
       
    }
    if (dem > 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    //cout << check(13, 12) << endl;
}