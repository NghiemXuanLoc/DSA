#include<iostream>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int a[100];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}