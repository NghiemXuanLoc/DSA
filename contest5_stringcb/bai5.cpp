#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (cnt == 3 && i != 0)
        {
            s.insert(i, ",");
            cnt = 1;
        }
        else
            cnt++;
    }
    cout << s << endl;
}