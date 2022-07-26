#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, t;
    cin >> t;
    for (int vv = 0; vv < t; vv++) {
        cin >> n;
        if (n) {
            int a = 2;
            while (true) {
                int b = n - 1 - a;
                if (__gcd(a, b) == 1) {
                    cout << a << ' ' << b << ' ' << 1;
                    break;
                }
                ++a;
            }
        } else {
            cout << (n / 2) << ' ' << ((n / 2) - 1) << ' ' << 1;
        }
        cout << '\n';
    }
    return 0;
}