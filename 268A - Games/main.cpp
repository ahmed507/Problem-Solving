//https://codeforces.com/problemset/problem/268/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,h,g,cnt=0;
    vector<int>home,guest;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>h;
        cin>>g;
        home.push_back(h);
        guest.push_back(g);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(home[i]==guest[j])++cnt;
        }
    }
    cout<<cnt;
    return 0;
}
