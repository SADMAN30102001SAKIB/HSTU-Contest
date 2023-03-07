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

    string s1, s2;
    cin >>s1>>s2;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 += s1[i] - '0';
        sum2 += s2[i] - '0';
    }
    if (sum1>sum2)
    {
        cout<<sum1<<"\n";
    }
    else
    {
        cout<<sum2<<"\n";
    }
    

    return 0;

}