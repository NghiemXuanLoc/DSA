#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j) || (j == 0))
            {
                a[i][j] = 1;
            }
            else
                a[i][j] = 0;
        }
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            a[i][j] %= 1000000007;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}