#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool check(string s)
{
    string t = s;
    int l = 0, r = t.size() - 1;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t == s;
}

bool cpm(string a, string b)
{
    return a.size() < b.size();
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    map<string, int> mp;
    vector<string> v;
    while (ss >> temp)
    {
        if (check(temp))
        {
            mp[temp]++;
            if (mp[temp] == 1)
            {
                v.push_back(temp);
            }
        }
    }
    stable_sort(v.begin(), v.end(), cpm);
    for (string x : v)
    {
        cout << x << " ";
    }
}