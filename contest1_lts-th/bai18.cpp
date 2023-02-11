#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

// phan tich thua so nguyen to

bool snt(int n)
{
    int ok = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt >= 2)
        {
            ok = 1;
            break;
        }
    }
    return ok;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (snt(i))
        {
            cout << i << " ";
        }
        }
    cout << endl;
}