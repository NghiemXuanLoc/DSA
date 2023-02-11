#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>

using namespace std;

// sang so nguyen to ethanotthenat

bool snt(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return n > 1;
}



int main(){
   int x;
   map<int, int> mp;
   int a[100005];
   int cnt = 0;
    while (cin >> x)
    {
        if (snt(x))
        {
            a[cnt++] = x;
            mp[x]++;
        }
        
    }
    for (int i = 0; i < cnt; i++)
    {
        if (mp[a[i]])
        {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
        
    }
    
}