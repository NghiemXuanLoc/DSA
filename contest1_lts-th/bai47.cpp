#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int cnt[1000001];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int res = *max_element(a, a + n);
    for (int i = res; i >= 1; i--)
    {
        int dem = 0;
        // vong for thu 2 la duyet cac bot cua i
        for (int j = 0; j <= res; j += i)
        {
            dem += cnt[j];
            if (dem >= 2)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}
