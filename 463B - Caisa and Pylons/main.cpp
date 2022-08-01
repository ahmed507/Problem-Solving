//https://codeforces.com/problemset/problem/463/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int n,h,last=0,energy=0,dolars=0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>h;
        energy += last-h;
        if(energy<0){
            dolars+=abs(energy);
            energy=0;
        }
        last = h;
    }
    cout<<dolars;

    return 0;
}
