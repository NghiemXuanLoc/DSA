#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> mp;

    while (n--)
    {
        string msv, ten;
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        mp[msv] = ten;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string ma;
        cin >> ma;

        if (mp.find(ma) != mp.end())
        {
            cout << mp[ma] << endl;
        }
        else
            cout << "NOT FOUND" << endl;
    }
}