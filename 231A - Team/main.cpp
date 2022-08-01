//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;


int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,a,b,c,cnt;
    cnt = 0;
    cin >> n;
    for (int i = 0; i <n ; ++i) {
        cin>>a>>b>>c;
        if(a+b+c>=2)cnt+=1;
    }
    cout<<cnt;
    return 0;

}
