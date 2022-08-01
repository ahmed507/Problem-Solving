//https://codeforces.com/problemset/problem/445/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    string x;
    vector<string>a;
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        for (int j = 0; j < m; ++j) {
            if(x[j]=='.'){
                if((i+j)%2==0){
                    x[j]='B';
                } else {
                    x[j] = 'W';
                }
            } else continue;
        }
        a.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<a[i][j];
        }
        cout<<'\n';
    }
    return 0;
}
