#include <iostream>
#include <math.h>

using namespace std;

bool so6(int n)
{
    while (n)
    {
        int temp = n % 10;
        if (temp == 6)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool tn(int n)
{
    int t, res = n, temp = 0;
    while (n)
    {
        t = temp * 10 + n % 10;
        temp = t;
        n /= 10;
    }
    return t == res;
}

bool so8(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    int res = sum % 10;
    return res == 8;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (tn(i) && so8(i) && so6(i))
        {
            cout << i << " ";
        }
    }
}