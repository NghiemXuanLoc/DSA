#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int k = 1; k <= n; k++)
    {
        int i = x / k;
        int temp = i * k;
        if (temp == x)
        {
            int j = x / k;
            if (j <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}