#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// quay lui de co cac xau a b
int n;
vector<string> v;
string s = "";

void Try(string s)
{
    for (char c = 'B'; c >= 'A'; c--)
    {
        if (s.size() == n)
        {
            cout << s << endl;
            return; // cau lenh return dung de in ra 1 lan cua sau s, kh duoc lap lai lan nua
        }
        else
            Try(s + c);// day la cua lenh backtrack
    }
}

int main()
{
    cin >> n;
    Try(s);
}
