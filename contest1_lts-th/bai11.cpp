#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;
using ll = long long;

// ham phan tich thua so nguyen to

void check(int n)
{
    int ok = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            ok = 1;
            cout << i;
            break;
        }
        if (ok)
        {
            break;
        }
    }
    if (n >= 1 && ok == 0)
    {
        cout << n;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        check(i);
        cout << endl;
    }
}
