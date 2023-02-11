#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k1, k2, k3, k4;
    int a[4];
    cin >> n;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int res = 1;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i])
        {
            res *= (n - cnt++);
        }
    }
    cout << res << endl;
}