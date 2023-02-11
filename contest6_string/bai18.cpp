#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string mk(string s)
{
    stringstream ss(s);
    string temp;
    string ans;
    while (getline(ss, temp, '/'))
    {
        int res;
        res = stoi(temp);
        ans += to_string(res);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string temp;
        string email = "";
        while (ss >> temp)
        {
            if (isalpha(temp[0]))
            {
                for (int i = 0; i < temp.size(); i++)
                {
                    temp[i] = tolower(temp[i]);
                }
                v.push_back(temp);
            }
            else
                v.push_back(temp);
        }
        email += v[v.size() - 2];
        for (int i = 0; i < v.size() - 2; i++)
        {
            email += v[i][0];
        }
        email += "@xyz.edu.vn";
        cout << email << endl;
        cout << mk(v[v.size() - 1]) << endl;
    }
}