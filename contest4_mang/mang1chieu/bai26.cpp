#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            cnt += (a[i] - a[i + 1] + 1);
            a[i + 1] += a[i] - a[i + 1] + 1;
        }
    }
    cout << cnt << endl;
    for (int  i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}