#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = "python";
    int cnt = 0, res = 0, ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[res])
        {
            cnt++;
            res++;
        }
        if (cnt >= 6)
        {
            cout << "YES" << endl;ok = 1;
            break;
            
        }
    }
    if (ok == 0)
    {
        cout << "NO" << endl;
    }
}