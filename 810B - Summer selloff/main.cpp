//https://codeforces.com/problemset/problem/810/B
#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n,f,k,l,cnt=0;
    cin>>n>>f;
    vector<vector<long long int>>items;
    for (int i = 0; i < n; ++i) {
        vector<long long int>help;
        cin>>k>>l;

        if(k>=l){
            cnt+=l;
        } else{
            help.push_back(k);
            help.push_back(l);
            help.push_back(min(2*k,l)-min(k, l));
            items.push_back(help);
        }

    }
    std::sort(items.begin(), items.end(),
              [] (vector<long long int> a, vector<long long int> b)
    {
        return a[2] > b[2];
    });
    for (int i = 0; i < items.size(); ++i) {
        if(f>0){
            cnt+=min(2*items[i][0],items[i][1]);
            --f;
        }
        else cnt+=min(items[i][0],items[i][1]);
    }
    cout<<cnt;

    return 0;
}
