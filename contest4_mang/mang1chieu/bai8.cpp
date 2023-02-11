#include <iostream>
#include <algorithm>

using namespace std;

int c[100000000];
int cnt = 0;

void tron(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            c[cnt++] = a[i++];
        }
        else
            c[cnt++] = b[j++];
    }
    while (i < n)
    {
        c[cnt++] = a[i++];
    }
    while (j < m)
    {
        c[cnt++] = b[j++];
    }
}

int main(){
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
    tron(a, n, b, m);
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    
}