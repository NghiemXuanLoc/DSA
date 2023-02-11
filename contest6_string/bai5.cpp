#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<set>

using namespace std;

int main(){
    string s, t;
    cin >> s;
    cin >> t;
    set<char> se1, se2, se3, se;

    for (int i = 0; i < s.size(); i++)
    {
        se1.insert(s[i]);
        se.insert(s[i]);
    }
    for (int i = 0; i < t.size(); i++)
    {
        se2.insert(t[i]);
        se.insert(t[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (se2.find(s[i]) != se2.end())
        {
            se3.insert(s[i]);
        }
    }
    

    for(auto x : se3){
        cout << x;
    }
    cout << endl;
    for(auto x : se){
        cout << x;
    }
}