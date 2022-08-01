//https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=0;
    char c,last='z';
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>c;
        if(c==last)cnt+=1;
        last=c;
    }
    cout<<cnt;
    return 0;
}
