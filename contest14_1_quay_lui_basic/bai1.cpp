#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

// quay lui xau nhi phan
string s;

void check()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << '0';
        }
    }
    else
    {
        s[i] = '1';
        cout << s << endl;
    }
}

int main()
{
    cin >> s;
    check();
}
