#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<string> se;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        se.insert(temp);
    }
    cout << se.size() << endl;
}