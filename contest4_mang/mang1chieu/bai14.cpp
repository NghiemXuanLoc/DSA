#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

// check so kh giam

bool check(string n)
{
    string t = n;
    int l = 0, r = t.size() - 1;
    while (l < r)
    {
        if (t[l] > t[l + 1])
        {
            return false;
        }
        l++;
    }
    return true;
}

bool cpm(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
    {
        int a1 = stoi(a.first), b1 = stoi(b.first);
        return a1 < b1;
    }
}

pair<string, int> a[100005];
int main()
{
    string s;
    pair<string, int> x;
    map<string, int> mp;
    while (cin >> s)
    {
        if (check(s))
        {
            mp[s]++;
        }
    }
    int cnt = 0;
    for (auto x : mp)
    {
        a[cnt].first = x.first;
        a[cnt].second = x.second;
        cnt++;
    }
    sort(a, a + cnt, cpm);
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
}