#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

bool cpm(string a, string b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cpm);
    for (auto x : v)
    {
        cout << x;
    }
}