#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    set<char> se1, se2;
    for (int i = 0; i < s1.size(); i++)
    {
        se1.insert(s1[i]);
    }
    for (int i = 0; i < s2.size(); i++)
    {
        se2.insert(s2[i]);
    }
    for (auto x : se1)
    {
        if (se2.find(x) == se2.end())
        {
            cout << x;
        }
    }
    cout << endl;
    for (auto x : se2)
    {
        if (se1.find(x) == se1.end())
        {
            cout << x;
        }
    }
}