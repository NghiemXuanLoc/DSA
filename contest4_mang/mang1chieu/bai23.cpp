#include <iostream>
#include <algorithm>

using namespace std;
int hop[100005 * 2];
int cnt = 0;
void tron(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (cnt < (n + m))
    {
        if (cnt % 2 == 0)
        {
            hop[cnt++] = a[i++];
        }
        else
            hop[cnt++] = b[j++];
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    tron(a, n, b, n);
    for (int i = 0; i < cnt; i++)
    {
        cout << hop[i] << " ";
    }
}