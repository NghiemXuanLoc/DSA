#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];

int main()
{
    cin >> n;
    set<int> se;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    vector<int> v(se.begin(), se.end());
    vector<vector<int>> v2;
    do
    {
        vector<int> temp;
        for (int i = 0; i < v.size(); i++)
        {
            temp.push_back(v[i]);
        }
        v2.push_back(temp);
    } while (next_permutation(v.begin(), v.end()));
    for (int i = v2.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < v2[i].size(); j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
}