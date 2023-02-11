// cach giai : sinh nhi phan

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, a[100];
bool final = false;

void sinh()
{
    int i = n;
    while (i > 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = true;
    }
    else
        a[i] = 1;
}

int main()
{
    cin >> n;
    vector<string> v;
    int b[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    while (!final)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                s += to_string(b[i]);
                s += " ";
            }
            
        }
        if (s.size() != 0)
        {
            v.push_back(s);
        }
        sinh();
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
}