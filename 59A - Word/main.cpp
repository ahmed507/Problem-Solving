//https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
     cin>>s;
    int lower=0,upper=0;
    for (int i = 0; i <s.length() ; ++i) {
        if(islower(s[i]))lower+=1;
        else upper+=1;
    }
    if(lower>=upper)transform(s.begin(),s.end(),s.begin(),::tolower);
    else transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
    return 0;
}
