#include <iostream>
#include <bits/stdc++.h>

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
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int l = j + 1, r = n - 1;
            while (l < r)
            {
                if (a[l] + a[r] + a[i] + a[j] == k)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                else if (a[i] + a[j] + a[l] + a[r] >= k)
                {
                    r--;
                }
                else
                    l++;
            }
        }
    }
    cout << "NO" << endl;
}