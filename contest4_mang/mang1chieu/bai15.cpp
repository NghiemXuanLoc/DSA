#include <iostream>
#include <algorithm>
#include <math.h>

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
    int cnt = 0;
    int min_val = INT_MAX;
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        min_val = min(min_val, abs(a[i + 1] - a[i]));
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) == min_val)
        {
            cnt++;
        }
    }
    cout << min_val << " " << cnt << endl;
}