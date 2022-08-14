//https://codeforces.com/contest/617/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,tmp;
    cin>>n;
    vector<int>index;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        if(tmp==1)index.push_back(i);
    }
    long long int out=1;
    if(index.size()<2){
        cout<<index.size();
        return 0;
    }
    for (int i = index.size()-1; i > 0; --i) {
       out*=index[i]-index[i-1];
    }
    cout<<out;
    return 0;
}
