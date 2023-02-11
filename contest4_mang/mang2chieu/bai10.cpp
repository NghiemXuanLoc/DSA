#include <iostream>
#include <algorithm>
#include <math.h>
#include<set>

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
    int n;
    cin >> n;
    int a[n][n];
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int temp = n, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && snt(a[i][j]))
            {
                se.insert(a[i][j]);
                
            }
            if ((j == temp - 1) && snt(a[i][j]))
            {
                se.insert(a[i][j]);
            }
        }
        temp--;
    }
    cout << se.size() << endl;
}