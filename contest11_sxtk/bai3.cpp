#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int tong(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

bool cpm(int a, int b)
{
    if (tong(a) != tong(b))
    {
        return tong(a) < tong(b);
    }
    else
        return a < b;
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
    sort(a, a + n, cpm);
    for (int x : a)
        cout << x << " ";
}