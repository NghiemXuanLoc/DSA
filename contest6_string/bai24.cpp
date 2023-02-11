#include <iostream>
#include <string>

using namespace std;
using ll = long long;
int dem[256];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
    }
    long long cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]])
        {
            int res = dem[s[i]];
            cnt += 1ll * res * (res - 1) / 2;
            dem[s[i]] = 0;
        }
    }
    cout << cnt + s.size() << endl;
}