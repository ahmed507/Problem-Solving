//https://codeforces.com/problemset/problem/431/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int cnt=0;
    int a[4];
    for (int i = 0; i < 4; ++i) {
        cin>>a[i];
    }
    cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        cnt+=a[(int)s[i]-48-1];
    }
    cout<<cnt;
    return 0;
}
//(int)'0'==48