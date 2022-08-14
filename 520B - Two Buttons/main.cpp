//https://codeforces.com/contest/520/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,cnt=0;
    cin>>m>>n;
    if(m>=n)cnt=m-n;
    else{
        while (m!=n){
            if(n>m & n%2 == 0)n/=2;
            else ++n;
            ++cnt;
        }
    }
    cout<<cnt;

    return 0;
}
