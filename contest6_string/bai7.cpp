#include <iostream>
#include <algorithm>

using namespace std;

bool check(string s)
{
    int l = 0, r = s.size() - 1;
    string t = s;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t == s;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}