//https://codeforces.com/problemset/problem/78/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    string c = "ROYGBIV";
    cin >> n;
    int j;
    for (int i = 0; i < n; ++i) {
        j =i%7;
        if(i==n-3&&(c[j]=='R'))j=1;
        else if (i==n-2&&(c[j]=='R'||c[j]=='O'))j=2;
        else if (i==n-1&&(c[j]=='R'||c[j]=='O'||c[j]=='Y'))j=3;
        cout<<c[j];
    }

    return 0;
}
