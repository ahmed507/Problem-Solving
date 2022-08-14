//https://codeforces.com/contest/236/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int n;
    int a,b,c,cnt=0;
    cin>>a>>b>>c;
    n = a*b*c+1;
    //check if prime
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++)if (hash[p])for (int ii = p * 2; ii < n; ii += p)hash[ii] = false;

    for (int i = 1; i < a+1; ++i) {
        for (int j = 1; j < b + 1; ++j) {
            for (int k = 1; k < c + 1; ++k) {
                int total = 1, number = i * j * k;
                for (int p = 2; p <= number; ++p) {
                    if (hash[p]) {
                        int cn = 0;
                        while (number % p == 0) {
                            number /= p;
                            ++cn;
                        }
                        total *= cn + 1;
                    }
                }
                cnt += total;

            }
        }
    }
    cout<<cnt;

    return 0;
}
