//https://codeforces.com/problemset/problem/405/A
#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,x;
    vector<int>cubes;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        cin>>x;
        cubes.push_back(x);
    }
    sort(cubes.begin(), cubes.end());
    for (int i = 0; i <n ; ++i) {
        cout<<cubes[i]<<" ";
    }
    return 0;
}
