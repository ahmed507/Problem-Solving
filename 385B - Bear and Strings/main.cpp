//http://codeforces.com/contest/385/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,tmp;
    long long int sum=0;
    vector<int>a;
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>tmp;
        if(tmp<0 && k>0){
            tmp*=-1;
            --k;
        }
        sum+=tmp;
        a.push_back(tmp);
    }
    
    if(k==0)cout<<sum;
    else{
        sort(a.begin(), a.end());
        if(k%2==0)cout<<sum;
        else cout<<sum-2*a[0];
    }


    return 0;
}