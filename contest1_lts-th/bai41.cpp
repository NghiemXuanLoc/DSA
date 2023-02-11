#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>

using namespace std;

bool check(string s)
{
    string t = s.substr(1, s.size() - 2);
    string temp = t;
    string s1 = "", s2 = "";
    s1 += s[0];
    s2 += s[s.size() - 1];
    int a = stoi(s1);
    int b = stoi(s2);
    int l = 0, r = temp.size() - 1;
    while (l <= r)
    {
        swap(temp[l], temp[r]);
        l++;
        r--;
    }
    return temp == t && (a == 2 * b || b == 2 * a);
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