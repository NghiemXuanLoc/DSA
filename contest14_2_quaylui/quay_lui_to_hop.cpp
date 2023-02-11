#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int n, k, a[100], cnt;

// bai toan dat ra la sinh to hop chap k cua N

void Try(int i)
{
    // vong for nay la tat ca cac truong hop co the xay ra cua 1 vi tri,
    // (gia tri nho nhat --> gia tri lon nhat ma gia tri do co the nhan duoc)
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        // if nay la cho ta biet da chon duoc k so thi in ra 
        if (i == k)
        {
            for (int res = 1; res <= k; res++)
            {
                cout << a[res] << " ";
            }
            cout << endl;
        }
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    Try(1);
}
