#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t,a;
    double x;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cin>>a;
        x = 360.0/(180-a);
        if(floor(x)==x){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
    return 0;
}
