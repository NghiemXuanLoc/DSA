#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    cnt += n / 1000;
    n %= 1000;
    cnt += n / 500;
    n %= 500;
    cnt += n / 200;
    n %= 200;
    cnt += n / 100;
    n %= 100;
    cnt += n / 50;
    n %= 50;
    cnt += n / 20;
    n %= 20;
    cnt += n / 10;
    n %= 10;
    cnt += n / 5;
    n %= 5;
    cnt += n / 2;
    n %= 2;
    cnt += n;
    cout << cnt << endl;
}