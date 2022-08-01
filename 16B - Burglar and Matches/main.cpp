//https://codeforces.com/problemset/problem/16/B
#include <bits/stdc++.h>

using namespace std;
string get_biggest(string s1,string s2){
    if(s1.length()>=s2.length())return s1;
    else return s2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned int a,b,n,m,total=0;

    cin>>n>>m;
    vector<pair<unsigned int,unsigned int>>k(m);
    for (int i = 0; i < m; ++i) {
        cin>>a>>b;
        auto &it = k.at(i);
        it.first = a;
        it.second=b;
    }
    std::sort(k.begin(), k.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });
    for (int i = m-1; i > -1 && n>0; --i) {
        if(n>k[i].first){
            n-=k[i].first;
            total+=((k[i].first)*(k[i].second));
        } else {
            total+=(n*(k[i].second));
            n = 0;
        }
    }
    cout<<total;



    return 0;
}