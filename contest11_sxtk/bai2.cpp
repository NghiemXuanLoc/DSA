#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cpm(int a, int b)
{
    return abs(a) < abs(b);
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
    stable_sort(a, a + n, cpm);
    for (int x : a)
        cout << x << " ";
}