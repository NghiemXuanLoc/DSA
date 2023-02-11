#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    ll sumh = 0, sumc = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sumh += a[i][j];
        }
        cout << sumh << " ";
        sumh = 0;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            sumc += a[j][i];
        }
        cout << sumc << " ";
        sumc = 0;
    }
}