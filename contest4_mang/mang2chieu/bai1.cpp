#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long;

bool snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (snt(a[i][j]))
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}