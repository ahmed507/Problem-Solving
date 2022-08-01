//https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>
using namespace std;


int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long int n,cnt_a,cnt_d;
    cnt_a=0;
    cnt_d=0;
    string s;
    cin>>n;
    cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='A')cnt_a+=1;
        else cnt_d+=1;
    }
    if(cnt_a>cnt_d)cout<<"Anton";
    else if(cnt_a<cnt_d) cout<<"Danik";
    else cout<<"Friendship";
    return 0;

}
