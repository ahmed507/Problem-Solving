//https://codeforces.com/problemset/problem/227/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n, m, b, tmp,index;
    map<long int, long int> a;
    cin >> n;
    for (long int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp] = i;
    }
    cin >> m;
    long long int cnt1 = 0, cnt2 = 0;
    for (long int i = 0; i < m; i++) {
        cin >> b;
        index = a[b];
        cnt1 += index + 1;
        cnt2 += n - index;

    }
    cout << cnt1 << ' ' << cnt2;


    return 0;
}
