#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (auto x : a)
    {
        mp[x]++;
    }

    // in theo thu tu tu nho toi lon

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    // in theo thu tu xuat hien trong mang
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]])
        {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}