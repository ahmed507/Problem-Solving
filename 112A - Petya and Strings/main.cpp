#include <bits/stdc++.h>
using namespace std;
int sol(string s1,string s2){
    for (int i = 0; i < max(s1.length(),s2.length()); ++i) {
        if(s1[i]>s2[i]) return 1;
        else if(s1[i]<s2[i]) return -1;
    }
    return 0;
}
int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s1,s2;
    int s1_val,s2_val;
    s1_val=0;
    s2_val=0;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<sol(s1,s2);
//    for (char i : s1) {
//        s1_val+=i;
//    }
//    for (char i : s2) {
//        s2_val+=i;
//    }
//    cout<<s1_val<<" "<<s2_val<<endl;
//    if(s1_val>s2_val)cout<<1;
//    else if(s1_val<s2_val)cout<<-1;
//    else cout<<0;
    return 0;
}
