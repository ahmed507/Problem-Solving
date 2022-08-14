//https://codeforces.com/contest/376/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        string s;
    int n,m,a,b,c;
    long long int cnt=0;
    cin>>n>>m;
    vector<int>l (n+1,0);
    for (int i = 0; i < m; ++i) {
        cin>>a>>b>>c;
        if(l[a]==0)l[a]=-c;
        else l[a]-=c;
        if(l[b]==0)l[b]=c;
        else l[b]+=c;
    }
    for(auto i:l){
        if(i<0)cnt+=abs(i);
    }
    cout<<cnt;

    return 0;
}
