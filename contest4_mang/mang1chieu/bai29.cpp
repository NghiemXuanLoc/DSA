#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b = 0, c = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            b = b * 10 + a[i];
        }
        else
            c = c * 10 + a[i];
    }
    cout << b + c << endl;
}