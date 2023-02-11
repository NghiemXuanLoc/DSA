#include <iostream>

using namespace std;

int dem[1000005];

int main()
{
    int n;
    cin >> n;
    int a[n];
    int ok = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (dem[a[i]] == 0)
        {
            dem[a[i]]++;
        }
        else
        {
            ok = 0;
            cout << a[i] << endl;
            break;
        }
    }
    if (ok)
    {
        cout << "-1" << endl;
    }
}