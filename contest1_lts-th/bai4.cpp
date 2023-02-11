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

bool snt(int n)
{
    while (n)
    {
        int x = n % 10;
        if (x == 0 ||x == 1 || x == 4 || x == 6 || x == 8 || x == 9)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    sang();
    int b, c;
    cin >> b >> c;
    int cnt = 0;
    for (int i = b; i <= c; i++)
    {
        if (snt(i) && a[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    
}