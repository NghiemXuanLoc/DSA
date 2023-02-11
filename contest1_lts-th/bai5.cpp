#include <iostream>
#include <math.h>

using namespace std;

int a[10000005];

void sang()
{
    for (int i = 2; i <= 10000000; i++)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        for (int j = i * i; j <= 10000000; j += i)
        {
            a[j] = 0;
        }
    }
}

int main()
{
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n / 2; i++)
        {
            if (a[i] && a[n - i])
            {
                cout << i << " " << (n - i) << endl;
            }
        }
    }
}