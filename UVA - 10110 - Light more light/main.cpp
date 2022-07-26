#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    unsigned int n;
    while(1){
        cin>>n;
        if(n==0)break;
        if((int)sqrt(n)==sqrt(n))cout<<"yes\n";
        else cout<<"no\n";
    }
    // cout<<(int)sqrt(5);
    return 0;
    
}
