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
    sort(a, a + n, greater<int>());
    int cnt = 1;
    int min_val = a[0];
    for (int i = 1; i < n; i++)
    {
        min_val--;
        if (min_val >= 0)
        {
            cnt++;
            min_val = min(min_val, a[i]);
        }
        else
            break;
    }
    cout << cnt << endl;
}