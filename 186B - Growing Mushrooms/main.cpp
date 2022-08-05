//https://codeforces.com/contest/186/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double n,t1,t2,k,a,b;
    cin>>n>>t1>>t2>>k;
    map<double,vector<int>> results;
    for (int i = 0; i < (int)n; i++){
        cin>>a>>b;
        //min(a,b)*t1*((100-k)/100)+max(a,b)*t2
        results[max(min(a,b)*t1*((100-k)/100)+max(a,b)*t2,
                    max(a,b)*t1*((100-k)/100)+min(a,b)*t2)].push_back(i+1);
    }
    cout.precision(2);
    for (auto i = results.rbegin();i!=results.rend();++i){
        for (auto j:i->second){
            cout<<fixed<<j<<' '<<i->first<<'\n';
        }
    }

    return 0;
}
