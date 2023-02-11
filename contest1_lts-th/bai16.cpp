#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

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

int tong1(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool tong2(int n)
{
    int res = n;
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            if (i < 10)
            {
                sum += i;
            }
            else
            {
                int temp = i;
                sum += tong1(temp);
            }
            n /= i;
        }
    }
    if (n != 1)
    {
        sum += tong1(n);
    }

    return sum == tong1(res) && !snt(res);
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        if (tong2(n))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}