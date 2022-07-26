#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//long get_incov(vector<ll> a){
//    long c=0;
//    for (ll i = 0; i < a.size(); ++i) {
//        for (ll j = i+1; j < a.size(); ++j) {
//            c+= abs(a[i]-a[j]);
//        }
//    }
//    return c;
//}
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
//        avg=sum/a.size();
        q = sum%a.size();
//        for (int j = 0; j < a.size(); ++j) {
//            if(q>0){
//                o.push_back(avg+1);
//                --q;
//            }
//            else o.push_back(avg);
//        }

        cout<<q*(n-q)<<'\n';
        a.clear();
//        o.clear();
    }



    return 0;
}
