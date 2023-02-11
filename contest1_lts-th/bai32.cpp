#include <iostream>
#include <math.h>

using namespace std;

int check(int n, int k)
{
    int cnt = 0;
    int temp = -1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            int res = i;
            cnt++;
            if (cnt == k)
            {
                return res;
            }
            n /= i;
        }
    }
    if (n > 1)
    {
        cnt++;
        if (cnt == k)
        {
            temp = n;
        }
    }
    return temp;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << check(n, k) << endl;
}