#include <iostream>
#include <math.h>

using namespace std;

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
    int to25 = 0, to50 = 0, to100 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
        {
            to25++;
        }
        else if (a[i] == 50)
        {
            if (to25 == 0)
            {
                ok = 0;
            }
            to50++;
            to25--;
        }
        else
        {
            if (to25 == 0 && to50 == 0)
            {
                ok = 0;
            }
            else if (to25 > 0 && to50 > 0)
            {
                to25--;
                to50--;
            }
            else if (to25 >= 3)
            {
                to25 -= 3;
            }
            else
                ok = 0;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}