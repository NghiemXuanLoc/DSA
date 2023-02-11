#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

bool check(ll n)
{
    while (n)
    {
        int temp = n % 10;
        if (temp != 0 && temp != 6 && temp != 8)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    cout << check(n) << endl;
}