#include <iostream>
#include <math.h>

using namespace std;

// ham check thuan nghich

int tn(int n)
{
    int t, res = n;
    int temp = 0;
    while (n)
    {
        t = temp * 10 + n % 10;
        temp = t;
        n /= 10;
    }
    return t == res;
}

bool snt(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        cnt++;
    }
    return cnt >= 3;
}
int main()
{
    int a, b, ok = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (tn(i) && snt(i))
        {
            ok = 1;
            cout << i << " ";
        }
    }
    if (!ok)
    {
        cout << -1 << endl;
    }
    
}