//https://codeforces.com/problemset/problem/427/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,temp,cnt=0,police=0;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>temp;
        if(temp==-1 && police==0){
            ++cnt;
        }
        else if(temp == -1 && police>0){
            --police;
        }
        else{
            police+=temp;
        }
    }
    cout<<cnt;
    return 0;
}
