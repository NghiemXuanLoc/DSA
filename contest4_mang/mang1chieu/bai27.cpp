#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            a[i + 1] += d;
            cnt++;
        }
        else if (a[i] > a[i + 1])
        {
            int temp = a[i] - a[i + 1];
            cnt += temp / d;
            cnt++;
            a[i + 1] = d * (temp / d) + d;
        }
    }
    cout << cnt << endl;
}