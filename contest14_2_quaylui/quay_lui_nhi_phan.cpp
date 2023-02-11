#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// yeu cau bai toan sinh ra tat ca cac xau nhi phan co do dai la n
int n, a[100];

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        // con 1 cau lenh dieu kien nhung do duoc dung so 0 va so 1 nhieu lan len kh can dieu kien nay
        a[i] = j;
        if (i == n)
        {
            for (int k = 1; k <= n; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
        else
            Try(i + 1);
        // con 1 ham backtrack nhung do duoc dung so 0 va so 1 nhieu lan len kh can ham nay
    }
}

int main()
{
    cin >> n;
    Try(1);
}
