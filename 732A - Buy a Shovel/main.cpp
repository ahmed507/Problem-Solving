#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k,r,n=1,m;
    cin>>k>>r;
    m = k;
    while(1){
        m =k*n;
        if(m%10==0 || m%10 == r){
            cout<<n;
            break;
        }
        ++n;
        
    }
    return 0;
}
