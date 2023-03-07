#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;
using ull = unsigned long long;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int32_t main() {

    fast_io();

    string s;
    cin >>s;
    if (s[s.size()-1]>='0' && s[s.size()-1]<='2')
    {
        for (int i = 0; s[i] != '.'; i++)
        {
            cout<<s[i];
        }
        cout<<"-"<<"\n";
    }
    else if (s[s.size()-1]>='3' && s[s.size()-1]<='6')
    {
        for (int i = 0; s[i] != '.'; i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        for (int i = 0; s[i] != '.'; i++)
        {
            cout<<s[i];
        }
        cout<<"+"<<"\n";
    }
    
    return 0;

}