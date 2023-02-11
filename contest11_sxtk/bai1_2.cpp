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
    vector<int> v(a, a + n);
    sort(a, a + n);
    sort(v.begin(), v.end(), greater<int>());
    for (int x : a)
        cout << x << " ";
    cout << endl;
    for (int x : v)
        cout << x << " ";
}