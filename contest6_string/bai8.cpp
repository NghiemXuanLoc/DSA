#include <iostream>
#include <algorithm>
#include <ctype.h>

using namespace std;

int dem[256];

string lower(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

int main()
{
    string s;
    cin >> s;
    string t = lower(s);
    for (int i = 0; i < t.size(); i++)
    {
        dem[t[i]]++;
    }
    int ok = 1;
    for (int i = 97; i < 123; i++)
    {
        if (dem[i] == 0)
        {
            ok = 0;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}