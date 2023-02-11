#include <iostream>
#include <math.h>

using namespace std;

bool snt(int n)
{
    int ok = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt < 2)
            {
                ok = 0;
            }
        }
    }
    if (n > 1)
    {
        ok = 0;
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