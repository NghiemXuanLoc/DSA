#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> a[i][j];
        }
    }
    int u, v;
    cin >> u >> v;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i == u)
            {
                swap(a[i][j], a[v][j]);
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}