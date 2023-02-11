#include <iostream>
#include <math.h>

using namespace std;

int snt(int n)
{
    int temp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            temp = i;
            n /= i;
        }
    }
    if (n > 1)
    {
        temp = n;
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << snt(n) << endl;
    }
}