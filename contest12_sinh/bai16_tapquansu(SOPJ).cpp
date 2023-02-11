#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[1001], ok = 0, cnt;

// truong hop tiep theo cua viec chon k nguoi tu N nguoi co san

void sinh()
{
    int i = k;
    while (i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 1;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    cin >> n >> k;
    set<int> ms;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        ms.insert(a[i]);
    }

    sinh();
    if (ok)
    {
        cout << k << endl;
        return 0;
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            auto it = ms.find(a[i]);
            if (it != ms.end())
            {
                cnt++;
            }
        }
    }
    cout << k - cnt << endl;
}
