//https://codeforces.com/problemset/problem/381/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    int sd[]={0,0};
    vector<int>cards;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        cards.push_back(x);
    }

    int k=0;
    while (!cards.empty()){
        if(k>1)k=0;
        if(cards.front()>cards.back()){
            sd[k]+=cards.front();
            cards.erase(cards.begin());
        }
        else{
            sd[k]+=cards.back();
            cards.pop_back();
        }
        ++k;
    }
    cout<<sd[0]<<" "<<sd[1];
    return 0;
}
