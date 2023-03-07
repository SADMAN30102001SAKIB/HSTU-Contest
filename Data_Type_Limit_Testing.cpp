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

    long long n;
    cin >>n;
    if ((n<(pow(2, 31)-1)) && (n>(pow(2, 31)*-1)))
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    

    return 0;

}