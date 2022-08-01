//https://codeforces.com/problemset/problem/1543/B
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    ll t,n,avg,z,sum,q;
    vector<ll>a,o;
    cin>>t;
    for (ll i = 0; i < t; ++i) {
        sum=0;
        cin>>n;
        for (ll j = 0; j < n; ++j) {
            cin>>z;
            a.push_back(z);
            sum+=z;
        }
        q = sum%a.size();

        cout<<q*(n-q)<<'\n';
        a.clear();
    }



    return 0;
}
