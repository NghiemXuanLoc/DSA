#include <iostream>

using namespace std;

int dem[10000005];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem[a[i]]++;
    }
    for (int i = 0; i < 10000005; i++)
    {
        if (dem[i])
        {
            cout << i << " " << dem[i] << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]])
        {
            cout << a[i] << " " << dem[a[i]] << endl;
            dem[a[i]] = 0;
        }
    }
}