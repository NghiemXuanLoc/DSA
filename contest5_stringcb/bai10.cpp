#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int dem[257];

int main()
{
    string s;
    cin >> s;
    int ok = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]])
        {
            ok = 0;
            cout << s[i] << endl;
            break;
        }
        dem[s[i]]++;
    }
    if (ok)
    {
        cout << "NONE" << endl;
    }
}