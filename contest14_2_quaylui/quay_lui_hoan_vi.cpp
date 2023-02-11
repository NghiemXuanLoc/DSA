#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, a[100], hv[100];

void ans(int k)
{
    for (int i = 1; i <= n; i++)
    {
        // buoc kiem tra dieu kien
        if (hv[i] == 0) // kiem tra xem i da duoc dung hay chua 
        {
            a[k] = i;
            hv[i] = 1;
            if (k == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << a[j] << " ";
                }
                cout << endl;
            }
            else
                ans(k + 1);
            hv[i] = 0; // day la buoc backtrack
        }
    }
}
int main()
{
    cin >> n;
    ans(1);
}
