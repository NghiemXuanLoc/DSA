#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;
using ll = long long;

bool snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

bool doixung(int a[], int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0, ans = 0, tich = 1;
    int max_val = INT_MIN, max_val2 = INT_MIN, min_val = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max_val = max(max_val, a[i]);
        min_val = min(min_val, a[i]);
        if (snt(a[i]))
        {
            cnt++;
        }
        tich *= a[i];
        tich %= 1000000007;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_val)
        {
            ans = i;
        }
        if (a[i] == max_val)
        {
            cout << a[i] << " " << i << endl;
            break;
        }
    }
    cout << min_val << " " << ans << endl;
    cout << cnt << endl;

    // tim so lon nhat va so lon thu 2 trong mang
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_val)
        {
            max_val2 = max_val;
            max_val = a[i];
        }
        else if (a[i] > max_val2)
        {
            max_val2 = a[i];
        }
    }

    vector<int> v(a, a + n);
    sort(v.begin(), v.end());

    ll tich1 = 1ll * v[0] * v[1];
    ll tich2 = 1ll * v[n - 1] * v[n - 2];
    if (tich1 < tich2)
    {
        cout << tich2 << endl;
    }
    else
        cout << tich1 << endl;

    // dong 5
    if (doixung(a, n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    cout << tich << endl;
}