#include <iostream>
#include <math.h>
#include <map>
#include <vector>

using namespace std;
using ll = long long;

int dem[10];

int main()
{
    ll n;
    cin >> n;
    ll temp = n;
    map<int, int> mp;
    vector<int> v;
    while (temp)
    {

        int x = temp % 10;
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            v.push_back(x);
            mp[x]++;
            dem[x]++;
        }
        temp /= 10;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (dem[v[i]])
        {
            cout << v[i] << " " << dem[v[i]] << endl;
            dem[v[i]] = 0;
        }
    }
}
