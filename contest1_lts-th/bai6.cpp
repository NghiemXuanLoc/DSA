#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so nguyen to

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

// ham kiem tra tat ca cac chu so la so nguyen to

bool snt2(int n)
{
    while (n)
    {
        int x = n % 10;
        if (x == 1 || x == 0 || x == 4 || x == 6 || x == 8 || x == 9)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

// ham tinh tong cac chu so va check snt;

bool snt3(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return snt(sum);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (snt2(i) && snt3(i) && snt(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
