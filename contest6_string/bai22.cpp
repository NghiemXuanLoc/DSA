#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    stringstream ss(s);
    stringstream tt(t);
    string temp;
    set<string> se1, se2;
    while (ss >> temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        se1.insert(temp);
    }
    while (tt >> temp)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        se2.insert(temp);
    }
    for (auto x : se1)
    {
        if (se2.find(x) == se2.end())
        {
            cout << x << " ";
        }
    }
}