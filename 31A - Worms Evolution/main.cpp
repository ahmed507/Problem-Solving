//https://codeforces.com/problemset/problem/31/A
#include <bits/stdc++.h>
using namespace std;
vector<int> sol(int n,vector<int>a){
    vector<int>o;
    o.push_back(-1);
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            auto k = find(a.begin(),a.end(),a[i]+a[j]);
            if(k!=a.end()){
                o.pop_back();
                o.push_back(i+1);
                o.push_back(j+1);
                o.push_back(distance(a.begin(),k)+1);
//                std::sort(o.begin(), o.end(),greater<int>());
                return o;
            }
        }
    }
    return o;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n,an;
    vector<int>a;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>an;
        a.push_back(an);
    }
    vector<int> ans = sol(n,a);
    if(ans[0]==-1)cout<<-1;
    else{
        for (int i = 2; i > -1; --i) {
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}
