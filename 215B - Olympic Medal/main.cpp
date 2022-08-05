//https://codeforces.com/contest/215/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int n,m,k,a,b,tmp;
    vector<int>x,y,z;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>tmp;
        x.push_back(tmp);
    }
    cin>>m;
    for (int i = 0; i < m; i++){
        cin>>tmp;
        y.push_back(tmp);
    }
    cin>>k;
    for (int i = 0; i < k; i++){
        cin>>tmp;
        z.push_back(tmp);
    }
    cin>>a>>b;
    double p1,p2,r1,r2;
    r1 = (double)*max_element(x.begin(), x.end());
    p1 = (double)*max_element(y.begin(), y.end());
    p2 = (double)*min_element(z.begin(), z.end());
    r2 = sqrt(b * p1 * pow(r1, 2) / ((a * p2) + (b * p1)));
    cout.precision(12);
    cout<<fixed<<r2;
    return 0;
}
