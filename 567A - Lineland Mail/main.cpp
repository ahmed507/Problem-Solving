//https://codeforces.com/problemset/problem/567/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    long long int tmp,mx,mn,n;
    vector<long int> cities;
    cin>>n;
    for(int i = 0;i<n;++i){
        cin>>tmp;
        cities.push_back(tmp);
    }
    sort(cities.begin(),cities.end());
    for(int i = 0;i<n;++i){
        if(i==0 || n==2)mn=abs(cities[1]-cities[0]);
        else mn = min(abs(cities[i]-cities[i-1]),abs(cities[i]-cities[i+1]));
        if(i==n-1 || n==2)mx=abs(cities[0]-cities[n-1]);
        else mx = max(abs(cities[i]-cities[0]),abs(cities[i]-cities[n-1]));
        cout<<mn<<' '<<mx<<'\n';
    }
    return 0;
}
