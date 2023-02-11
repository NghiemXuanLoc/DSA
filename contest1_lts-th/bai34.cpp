
#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham tim ucln giua 2 so a va b

ll check1(ll a, ll b)
{
    while (b != 0)
    {
        ll res = a % b;
        a = b;
        b = res;
    }
    return a;
}

// ham tim boi chung nho nhat giua 2 so  a va b

ll check2(ll a, ll b)
{
    ll res = 1ll * a * b / check1(a, b);
    return res;
}

// ham tim so nho nhat co n chu so chia het cho 1 so co dinh

ll check3(ll a, ll b, ll c, ll n)
{
    //ll res = check1(check1(a, b), c);
    ll temp = check2(check2(a, b), c);
    ll dau = 1ll * pow(10, n - 1), cuoi = 1ll * pow(10, n) - 1;
    ll cnt = 1ll * (dau + temp - 1) / temp * temp;
    if (cnt >= dau && cnt <= cuoi)
    {
        return cnt;
    }
    else
        return -1;
}

int main()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << check3(a, b, c, n) << endl;
}
