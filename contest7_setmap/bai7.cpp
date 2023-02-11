#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    set<string> se;
    while (ss >> temp)
    {
        se.insert(temp);
    }
    cout << se.size() << endl;
    cout << *se.begin() << " ";
    cout << *se.rbegin() << endl;
}