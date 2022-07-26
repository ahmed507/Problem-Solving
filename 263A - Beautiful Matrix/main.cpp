#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int x,one_i,one_j;

    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>x;
            if(x!=0){
                one_i=i;
                one_j = j;
            }
        }

    }
    cout<<abs(one_i-2)+abs(one_j-2);
    return 0;
}
