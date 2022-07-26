#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    int a, b, c;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        bool sol = false;
        int x, y, z;
        for (x = -22; x <= 22 && !sol; ++x) {
            if (x * x <= c) {
                for (y = -100; y <= 100 && !sol; ++y) {
                    if (x != y && x * x + y * y <= c) {
                        for (z = -100; z <= 100 && !sol; ++z) {
                            if (x * y * z == b && x + y + z == a && x * x + y * y + z * z == c && z != x && z != y) {
                                cout << x << " " << y << " " << z << '\n';
                                sol = true;
                            }
                        }
                    }
                }
            }
        }
        if (!sol)cout << "No solution.\n";
    }
    return 0;
}
