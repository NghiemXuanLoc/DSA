#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void in1(int a[], int k, int n)
{
    if (k == n - 1)
    {
        cout << a[k] << " ";
        return;
    }
    else
    {
        in1(a, k + 1, n);
        cout << a[k] << " ";
    }
}

void in2(int a[], int k, int n)
{
    if (k == n - 1)
    {
        cout << a[k] << " ";
    }
    else
    {
        cout << a[k] << " ";
        in2(a, k + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    in2(a, 0, n);
    cout << endl;
    in1(a, 0, n);
    cout << endl;
}