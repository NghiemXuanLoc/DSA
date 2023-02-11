#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<int, int> mp;

bool check2(ll n)
{
    while (n)
    {
        int temp = n % 10;
        if (temp != 4 && temp != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
bool check(ll n)
{
    int temp = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {

                mp[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
         mp[n]++;
    }
    if(check2(n)) return true;
    

    return mp[2] >= 2 || mp[7] || check2(temp);
}

int main()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}