//http://codeforces.com/contest/385/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    vector<pair<int,int>>bear_loc;
    long long int cnt = 0;
    cin>>s;
    if(s.length()<4){
        cout<<0;
        return 0;
    }
    for(int i = 0 ; i<s.length()-3;++i){
        if(s[i]=='b'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='r') {
            bear_loc.push_back(make_pair(i,i+3));
            i = i+3;
        }
    }
    for (int i = 0; i < bear_loc.size(); ++i) {
        if(i==0){
            cnt+=(bear_loc[i].first+1)*(s.length()-bear_loc[i].second);
        } else{
            cnt+=(bear_loc[i].first-bear_loc[i-1].first)*(s.length()-bear_loc[i].second);
        }
    }
    cout<<cnt;

    return 0;
}