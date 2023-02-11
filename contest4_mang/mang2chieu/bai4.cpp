#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

// ham check so thuan nghich

bool tn(int n)
{
    int res = n;
    int temp = 0;
    while (n)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return res == temp;
}

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i && tn(a[i][j]))
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}