#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dautien = -1, cuoicung = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            dautien = i + 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cuoicung = i + 1;
        }
    }
    if (dautien != -1)
    {
        cout << dautien << " " << cuoicung << endl;
    }
    else
        cout << -1 << " " << -1 << endl;
}