#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> se;
    int n;
    cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; --i)
    {
        se.insert(a[i]);
        f[i] = se.size();
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l;
        cin >> l;
        cout << f[l] << endl;
    }
}