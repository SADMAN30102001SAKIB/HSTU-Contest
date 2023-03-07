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

    int r, c;
    cin >>r>>c;
    if (r%2)
    {
        if ((c >= r && c <= 15 - r + 1) || c%2)
        {
            cout<<"black"<<"\n";
        }
        else
        {
            cout<<"white"<<"\n";
        }
    }
    else
    {
        if ((c >= r && c <= 15 - r + 1) || c%2==0)
        {
            cout<<"white"<<"\n";
        }
        else
        {
            cout<<"black"<<"\n";
        }
    }
    

    return 0;

}