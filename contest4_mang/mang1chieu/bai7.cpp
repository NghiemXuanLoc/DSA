#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            v2.push_back(x);
        }
        else
            v1.push_back(x);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end());
    for(auto x : v1){
        cout << x << " ";
    }
    for(auto x : v2){
        cout << x << " ";
    }
}