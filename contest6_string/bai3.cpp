#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>

using namespace std;

int dem[270];

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
    }

    // in theo thu tu tu dien

    for (int i = 0; i < 270; i++)
    {
        if (dem[i])
        {
            cout << (char)i << " " << dem[i] << endl;
        }
    }
    cout << endl;
    
    // in theo thu tu xuat hien
    for (int i = 0; i < s.size(); i++)
    {
        if(dem[s[i]]){
            cout << s[i] << " " << dem[s[i]] << endl;
            dem[s[i]] = 0;
        }
    }
}