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
    cout<<(a-b)/3.0 + b<<"\n";

    return 0;

}