#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    int temp = 5;
    while (temp <= n)
    {
        cnt += n / temp;
        temp *= 5;
    }
    cout << cnt << endl;
}