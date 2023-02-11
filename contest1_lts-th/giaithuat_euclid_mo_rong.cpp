#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int eulid(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    else
    {
        int x1, y1;
        int d = eulid(b, a % b, x1, y1);
        x = y1;
        y = x1 - y1 * (a / b);
        return d;
    }
}

int main()
{
    int x, y;
    eulid(8, 5,x, y);
    cout << x << " " << y << endl;
}