#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = a[n - 1];

    int cnt = 1;
    int index = 0;
    int max_val = 1;
    ll sum = a[0];
    ll temp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            cnt++;
            temp += a[i + 1];
        }
        else
        {
            if (cnt >= max_val)
            {
                if (temp >= sum)
                {
                    max_val = cnt;
                    index = i - max_val + 1;
                    sum = temp;
                }
            }
            cnt = 1;
            temp = a[i + 1];
        }
    }
    cout << max_val << endl;

    for (int i = index; i < index + max_val; i++)
    {
        cout << a[i] << " ";
    }
}