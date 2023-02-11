#include <iostream>
#include <math.h>

using namespace std;

int a[10000000];

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

bool snt(int n){
    for (int i = 0; i <+ sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return n > 1;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (snt(x))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}