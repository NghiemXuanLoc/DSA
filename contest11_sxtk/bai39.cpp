#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
        {
            break;
        }
        else
            sum += a[i];
    }
    cout << sum << endl;
}