#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int so, cai, db;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            so++;
        }
        else if (isalpha(s[i]))
        {
            cai++;
        }
        else
        {
            db++;
        }
    }

    cout << cai << " " << so << " " << db << endl;
}