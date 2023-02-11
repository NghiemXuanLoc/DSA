
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

// viet ham so nguyen to

bool nt(int n)
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
    multiset<int> se;
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
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && nt(a[i][j])) // so nguyen to tren duong cheo chinh
            {
                cnt++;
            }
            if ((j == temp - 1) && nt(a[i][j]))
            {
                cnt++;
            }
            if ((i == j) && (j == temp - 1) && nt(a[i][j]))
            {
                cnt--;
            }
        }
        temp--;
    }
    cout << cnt << endl;
}