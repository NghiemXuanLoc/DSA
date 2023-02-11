#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mixi = INT_MAX, maxi = INT_MIN;

    cout << abs(a[1] - a[0]) << " " << abs(a[n - 1] - a[0]) << endl;
    for (int i = 1; i < n - 1; i++)
    {
        mixi = min(abs(a[i] - a[i - 1]), abs(a[i + 1] - a[i]));
        maxi = max(abs(a[i] - a[0]), abs(a[n - 1] - a[i]));
        cout << mixi << " " << maxi << endl;
    }
    cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]);
}
