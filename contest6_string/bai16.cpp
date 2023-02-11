#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string ns(string s)
{
    string t = s;
    if (t[1] == '/')
    {
        t = '0' + t;
    }
    if (t[4] == '/')
    {
        t.insert(3, "0");
    }

    return t;
}

int main()
{
    string s, sn;
    getline(cin, s);
    cin >> sn;
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        temp[0] = toupper(temp[0]);
        for (int i = 1; i < temp.size(); i++)
        {
            temp[i] = tolower(temp[i]);
        }
        v.push_back(temp);
    }
    string res = ns(sn);
    for (string x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << res << endl;
}