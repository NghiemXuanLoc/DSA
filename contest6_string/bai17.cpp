#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>

using namespace std;

string chuanhoa(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = toupper(t[i]);
    }

    return t;
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v1;
    while (ss >> temp)
    {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        v1.push_back(temp);
    }
    v1[v1.size() - 1] = chuanhoa(v1[v1.size() - 1]);
    vector<string> v2(v1);
    for (int i = 0; i < v1.size(); i++)
    {
        if (i == v1.size() - 2)
        {
            v1[i] = v1[i] + ",";
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        if (i == v2.size() - 1)
        {
            v2[i] = v2[i] + ",";
        }
    }
    for (string x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << v2[v2.size() - 1] << " ";
    for (int i = 0; i < v2.size() - 1; i++)
    {
        cout << v2[i] << " ";
    }
}