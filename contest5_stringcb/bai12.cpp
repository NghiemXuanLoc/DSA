#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool inhoa(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        if (inhoa(temp))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
