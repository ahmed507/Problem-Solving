//https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,h,cnt;
    cnt=0;
    cin>>n>>h;
    vector<int> a(n);
    for(int &e :a){
        cin>>e;
    }
    for(const auto &e :a){
        if(e>h)cnt+=2;
        else cnt+=1;
    }
    cout<<cnt;
}
