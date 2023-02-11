#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    int cnt = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int temp = 0;
        while (n % i == 0)
        {
            temp++;
            n /= i;
        }
        cnt *= (temp + 1);
    }
    if (n > 1)
    {
        cnt *= 2;
    }

    cout << cnt << endl;
}