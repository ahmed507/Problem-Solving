//https://codeforces.com/problemset/problem/129/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,tmp,cnt=0,out=0;
    cin>>n;
    map<int,int>a;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        ++a[tmp];
        cnt+=tmp;
    }
    if(cnt%2!=0){
        for(auto i:a){
            if(i.first%2!=0)out+=i.second;
        }
    }
    else{
        for(auto i:a){
            if(i.first%2==0)out+=i.second;
        }
    }
    cout<<out;



    return 0;
}
