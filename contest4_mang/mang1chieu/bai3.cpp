#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_val)
        {
            max_val = max(max_val, a[i]);
        }
    }
   
}