#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n, k, s, cnt, X[100];

void Try(int i, int sum, int dem){
    for(int j = X[i - 1] + 1; j <= n; j++){
        X[i] = j;
        sum += j;
        dem += 1;
        if(sum == s && dem == k){
            ++cnt;
        }
        else if(sum < s && dem < k){
            Try(i + 1, sum, dem);
        }
        sum -= j;
        dem -= 1;
    }
}
int main(){
    cin >> n >> k >> s;
    Try(1, 0, 0);
    cout << cnt << endl;
}