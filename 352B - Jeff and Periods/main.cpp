//http://codeforces.com/contest/352/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int n,a;
    map<int,vector<int>>m;
    vector<pair<int,int>>out;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a;
        m[a].push_back(i);
    }
    for(auto i:m){
        int tmp=0;
        bool arithmetic_progression = true;
        if(i.second.size()==1);
        else{
            for (int j = 0; j < i.second.size()-1 &&arithmetic_progression; ++j) {
                if(tmp!=0&&i.second[j+1]-i.second[j]!=tmp)arithmetic_progression= false;
                tmp = i.second[j+1]-i.second[j];
            }
        }
        if(arithmetic_progression){
            out.push_back(make_pair(i.first,tmp));
        }

    }
    cout<<out.size()<<'\n';
    for(auto i:out){
        cout<<i.first<<' '<<i.second<<'\n';
    }

    return 0;
}
