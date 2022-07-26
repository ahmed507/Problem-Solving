#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned long n, index=0;
    string x;
    cin >> n;
    x = to_string(n);
    for (int i = 1; i < x.length(); ++i) {
        index += pow(2, i);
    }
    if (x.length() > 1) {
        for (int i = 0; i < x.length() - 1; i++) {
            if (x[i] == '7')index += pow(2, x.length() - i) / 2;
        }
    }
    if (x[x.length() - 1] == '4')index += 1;
    else index += 2;
    cout << index;
    return 0;
}