//https://codeforces.com/contest/514/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x0,y0,x,y;
    double x_slop,y_slop;
    set<double>slop;
    cin>>n>>x0>>y0;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        y_slop = y0-y;
        x_slop = x0-x;
        if(x_slop==0)slop.insert(inf);
        else slop.insert(y_slop/x_slop);
    }
    cout<<slop.size();


    return 0;
}
