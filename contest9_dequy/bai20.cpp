#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int ans = 1e9;
    if (n % 3 == 0)
        ans = min(ans, 1 + check(n / 3));
    if (n % 2 == 0)
        ans = min(ans, 1 + check(n / 2));
    ans = min(ans, 1 + check(n - 1));
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
}