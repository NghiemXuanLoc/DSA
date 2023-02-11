#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, a[100], sum = 0;

void Try(int i)
{
    for (int j = a[i - 1]; j >= 1; j--)
    {
        if (sum + j <= n)
        {
            a[i] = j;
            sum += j;
            if (sum == n)
            {
                for (int k = 1; k <= i; k++)
                {
                    cout << a[k] << " ";
                }
                cout << endl;
            }
            else
                Try(i + 1);
            sum -= j;
        }
    }
}
int main()
{
    cin >> n;
    a[0] = n;
    Try(1);
}
