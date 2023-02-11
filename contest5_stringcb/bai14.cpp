#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string t = "28tech";
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        if (t == temp)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}