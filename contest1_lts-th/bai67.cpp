#include<iostream>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int p, x;
    cin >> p >> x;
    int a[4];
    int temp = p % 10;
    if (temp == 1)
    {
        cout << 1 << endl;
    }else if (temp == 2)
    {
        int res = x % 4;
        int a[4] = {6, 2, 4, 8};
        cout << a[res] << endl;
    }else if (temp == 3)
    {
        int res = x % 4;
        int a[4] = {1, 3, 9 , 7};
        cout << a[res] << endl;
    }else if (temp == 4)
    {
        int res = x % 2;
        int a[2] = {6, 4};
        cout << a[res] << endl;
    }else if (temp == 5)
    {
        cout << 5 << endl;
    }else if (temp == 6)
    {
        cout << 6 << endl;
    }else if (temp == 7)
    {
        int res = x % 4;
        int a[4] = {1, 7, 9, 3};
        cout << a[res] << endl;
    }else if (temp == 8)
    {
        
        int res = x % 4;
        int a[4] = {6, 8, 4, 2};
        cout << a[res] << endl;
    }else if (temp == 9)
    {
        int res = x % 2;
        int a[2] = {1, 9};
        cout << a[res] << endl;
    }else cout << 0 << endl;
}