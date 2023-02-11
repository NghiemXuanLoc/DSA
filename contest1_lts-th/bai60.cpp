#include <iostream>
#include <math.h>
#include <map>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<ll, ll> mp;
    ll uoc = 1;
    int ans = 1000000007;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        int temp = a[j];
        for (int i = 2; i <= sqrt(temp); i++)
        {

            if (temp % i == 0)
            {
                while (temp % i == 0)
                {
                    mp[i]++;
                    temp /= i;
                }
            }
        }
        if (temp != 1)
        {
            mp[temp]++;
        }
    }
    for (auto x : mp)
    {
        uoc *= (x.second + 1);
        uoc %= ans;
    }
    cout << uoc << endl;
}
