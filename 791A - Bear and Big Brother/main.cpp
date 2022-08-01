//https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int a,b,cnt;
    cnt = 1;
    cin>>a>>b;
    while (b>=a){
        a *= 3 *cnt;
        b *= 2*cnt;
        cnt+=1;
    }
    cout<<cnt-1;
    return 0;
}
