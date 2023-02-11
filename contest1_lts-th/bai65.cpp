#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// ham dem xem N! co bao nhieu chu so 0 o cuoi

int check(int n)
{
    int cnt = 5;
    int res = 0;
    while (cnt <= n)
    {
        res += n / cnt;
        cnt *= 5;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int res = check(n);
    
}