//https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, cnt = 0, out = 0, a,max_n = 1000000000001;
    cin >> n;
    long long int pn = 1000001;
    vector<bool> is_prime(pn, true);
    is_prime[0] = is_prime[1] = false;
    for (long long int i = 2; i <= pn; i++) {
        if (is_prime[i] && (long long)i * i <= pn) {
            for (long long int j = i * i; j <= pn; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 0; i < n; ++i) {
        cin >> a;
        long long x = (long long)sqrt(a);
        if(x*x==a && is_prime[x])cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
