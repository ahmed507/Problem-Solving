#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int n;
    bool first= true,sec= true;
    vector<char>x,y;
    string s;
    cin>>n;
    cin>>s;
    for (int i = 0; i < 2*n; ++i) {
        if(i<n) x.push_back(s[i]);
        else y.push_back(s[i]);
    }
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());
    for (int i = 0; i < n&&(first||sec); ++i) {
        if(x[i]<=y[i] && first){
            first = false;
        }
        if(x[i]>=y[i] && sec){
            sec = false;
        }
    }
    if(first||sec)cout<<"YES\n";
    else cout<<"NO\n";
}
