#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    ll cnt = 1;
    while (t--)
    {
        int p, e;
        cin >> p >> e;
        cnt *= (e + 1);
        cnt %= 1000000007;
    }
    cout << cnt << endl;
}