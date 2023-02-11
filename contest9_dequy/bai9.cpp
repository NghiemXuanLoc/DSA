#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lt(int a, int b)
{
    int temp = 1000000007;
    if (b == 1)
    {
        return a;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        if (b % 2 == 1)
        {
            return 1ll * lt(a, b - 1) % temp * a % temp;
        }
        else
        {
            int res = lt(a, b / 2) % temp;
            return 1ll * res * res % temp;
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << lt(a, b) << endl;
}