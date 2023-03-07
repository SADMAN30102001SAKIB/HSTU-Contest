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

    int a, b;
    cin >>a>>b;
    for (int i = 0; i < 256; i++)
    {
        if ((a^i) == b)
        {
            cout<<i<<"\n";
            break;
        }
        
    }
    

    return 0;

}