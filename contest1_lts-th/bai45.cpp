#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    n %= 111;
    n %= 11;
    if (n)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}