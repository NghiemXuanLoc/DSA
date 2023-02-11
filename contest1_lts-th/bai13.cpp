#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    ll n, p;
    cin >> n >> p;
    ll cnt = 0;
    ll temp = p;
    while (temp <= n)
    {
        cnt += n / temp;
        temp *= p;
    }
    cout << cnt << endl;
}