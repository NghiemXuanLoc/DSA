#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;

void sinh()
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
    }
    if (i < 0)
    {
        cout << "NOT EXIST" << endl;
        return;
    }
    else
    {
        int temp = s.size() - 1;
        while (s[i] >= s[temp])
        {
            temp--;
        }
        swap(s[i], s[temp]);
        sort(s.begin() + i + 1, s.end());
        cout << s << endl;
    }
}

int main()
{
    cin >> s;
    sinh();
}