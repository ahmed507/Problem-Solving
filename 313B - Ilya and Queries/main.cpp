//https://codeforces.com/problemset/problem/313/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m,l,r,cnt=0;
    string s;
    cin>>s;
    int dp[100005];
    for (int i = 1; i < s.length(); ++i) {
        if(s[i-1]==s[i])++cnt;
        dp[i]=cnt;
    }
    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<'\n';

    }

    return 0;
}
