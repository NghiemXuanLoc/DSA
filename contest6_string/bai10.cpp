#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

string a[100005];
int cnt;

int main()
{
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        mp[temp]++;
        if (mp[temp] == 1)
        {
            a[cnt++] = temp;
        }
    }
    for (auto x : mp)
    {
        cout << x.first << " ";
    }
    cout << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
}