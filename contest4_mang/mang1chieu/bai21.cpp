#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int a[1000000];
int cnt = 0, c = 0, l = 0;

int main()
{
    int x;
    while (cin >> x)
    {
        a[cnt++] = x;
        if (x % 2 == 0)
        {
            c++;
        }
        else
            l++;
    }
    if (((cnt + 1) % 2 == 0 && c > l) || ((cnt + 1) % 2 == 1 && c < l))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}