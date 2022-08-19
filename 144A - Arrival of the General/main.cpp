//https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0,tmp;
    cin >> n;
    vector<int>a;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        a.push_back(tmp);
    }
    int x = n - (find(a.rbegin(), a.rend(),*min_element(a.begin(),a.end()))-a.rbegin())-1;
    for (int i = x; i < n-1; ++i) {
        swap(a[i],a[i+1]);
        ++cnt;
    }
    int y = std::find(a.begin(), a.end(),*max_element(a.begin(),a.end()))-a.begin();
    for (int i = y; i > 0; --i) {
        swap(a[i],a[i-1]);
        ++cnt;
    }
    cout<<cnt;
    
    return 0;
}
