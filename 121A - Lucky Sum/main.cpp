#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll l,r;
    ll ans=0;
    cin>>l>>r;
    vector<ll> lucky;
    lucky.push_back(0);
    lucky.push_back(4);
    lucky.push_back(7);
    int i=3;
    ll val = 0;
    while(val<r) {
        val = lucky[i - 2] * 10 + 4;
        lucky.push_back(val);
        val = lucky[i - 2] * 10 + 7;
        lucky.push_back(val);
        ++i;
    }
    i=0;
    while (l<=r){
        if(lucky[i]<l)++i;
        else{
            ans+=lucky[i];
            ++l;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
