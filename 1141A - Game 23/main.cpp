#include <bits/stdc++.h>

using namespace std;

int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    int n, m, k, cnt = 0;
    cin >> n >> m;
    if (m != n && (m % n != 0 || (m % 3 != 0 && m % 2 != 0))) {
        cout << -1 << '\n';
    } else {
        k = m / n;
        while (k != 1) {
            if (k % 3 == 0 && k % 2 == 0) {
                k /= 6;
                cnt += 2;
            } else if (k % 3 == 0) {
                k /= 3;
                ++cnt;
            } else if (k % 2 == 0) {
                k /= 2;
                ++cnt;
            } else{
                cnt = -1;
                break;
            }
        }

        cout << cnt << '\n';
    }

    return 0;

}
