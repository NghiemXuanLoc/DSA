#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

ll c[60][60];

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p];

    // nhap 2 ma tran

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }

    // nhan 2 ma tran
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] += 1ll * a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}