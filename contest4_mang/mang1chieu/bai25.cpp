#include <iostream>

using namespace std;

int dem[3];

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
    for (int i = 0; i < dem[0]; i++)
    {
        cout << 0 << " ";
    }
    for (int i = 0; i < dem[1]; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < dem[2]; i++)
    {
        cout << 2 << " ";
    }
}