#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// vi tri dung cua 2 nguyen am co 2 truong hop
// TH1 dung dau va dung cuoi
// TH2 2 nguyen am dung canh nhau

string s;
char c;
int ok;

void ktao()
{
    for (int i = 65; i <= c; i++)
    {
        s += (char)i;
    }
}

bool check()
{
    string ans1 = "AE", ans2 = "EA";
    if ((s.find(ans1) == string::npos && s.find(ans2) == string::npos))
    {
        return false;
    }
    return true;
}
bool check2()
{
    return s[0] == 'A' && s[s.size() - 1] == 'E' || (s[0] == 'E' && s[s.size() - 1] == 'A');
}
int main()
{
    cin >> c;
    ktao();
    vector<string> v;
    string temp = "E";
    if (s.find(temp) == string::npos)
    {
        do
        {
            if (s[0] == 'A' || s[s.size() - 1] == 'A')
            {
                v.push_back(s);
            }

        } while (next_permutation(s.begin(), s.end()));
    }
    else
    {
        do
        {
            if (check() || check2())
            {
                v.push_back(s);
            }
        } while (next_permutation(s.begin(), s.end()));
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
}
