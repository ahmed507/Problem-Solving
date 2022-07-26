#include <iostream>
using namespace std;
typedef long long int ll;
ll sol(string n) {
    ll cnt = 0;
    if (n.length() < 2) {
        return 0;
    }
    while (n.length() != 0) {
        ll sum = 0;
        for (int i = 0; i < n.length(); ++i) {
            sum += (int) n[i] - 48;
        }
        n = to_string(sum);
        cnt += 1;
        if (n.length() == 1) {
            return cnt;
        }
    }

}
int main() {
    string n;
    cin>>n;
    cout<<sol(n);
    return 0;
}
