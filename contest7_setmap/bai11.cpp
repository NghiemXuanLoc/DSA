#include <iostream>
#include <algorithm>

using namespace std;
int g[10000005];
int h[10000005 * 2];
int cntg = 0, cnth = 0;

void hop(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (a[i] == b[j])
            {
                j++;
            }
            h[cnth++] = a[i++];
        }
        else
        {
            h[cnth++] = b[j++];
        }
    }
    while (i < n)
    {
        h[cnth++] = a[i++];
    }
    while (j < m)
    {
        h[cnth++] = b[j++];
    }
}

void giao(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        if (a[i] > b[j])
        {
            j++;
        }

        if (a[i] == b[j])
        {
            g[cntg++] = a[i++];
            j++;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    hop(a, n, b, m);
    giao(a, n, b, m);
    for (int i = 0; i < cnth; i++)
    {
        cout << h[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < cntg; i++)
    {
        cout << g[i] << " ";
    }
}