#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int a[4] = {1, 2, 3, 4};
    int b[4] = {8, 4, 2, 6};

    if (n % 4 == a[0])
    {
        cout << b[0] << endl;
    }
    else if (n % 4 == a[1])
    {
        cout << b[1] << endl;
    }
    else if (n % 4 == a[2])
    {
        cout << b[2] << endl;
    }
    else
        cout << b[3] << endl;
}