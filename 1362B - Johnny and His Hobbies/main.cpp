//https://codeforces.com/problemset/problem/1362/B
#include <bits/stdc++.h>

using namespace std;
int sol(){
    vector<int>S;
    int n,s,z,cnt;
    cin>>n;
    for (int j = 0; j < n; ++j) {
        cin>>s;
        S.push_back(s);
    }
    for (int j = 1; j <= 1024; ++j) {
        cnt = 0;
        for (int k = 0; k < n; ++k) {
            z = S[k]^j;
            bool o = find(S.begin(), S.end(),z)!= S.end();
            if(o)cnt+=1;
            else break;
        }
        if(cnt==S.size()) return j;
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cout<<sol()<<'\n';
    }
    return 0;
}
