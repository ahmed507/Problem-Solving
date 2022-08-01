//https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 1;
    string m;
    char temp = 'x';
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m[0] == '0' && temp == '0')cnt += 1;
        else if (m[0] == '1' && temp == '1')cnt += 1;
        temp = m[1];
    }
    cout << cnt;
    return 0;
}
