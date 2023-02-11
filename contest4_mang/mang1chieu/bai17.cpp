#include<iostream>
#include<algorithm>

using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int a[n + 5];
    ll tong[n + 5];
    tong[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    tong[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        tong[i] = tong[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << tong[r] - tong[l - 1] << endl;
    }
    
}