#include <iostream>
using namespace std;

int main() {
    long long int n, x, val;
    long long int cnt = 0;
    char stat;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> stat >> val;
        if (stat == '+')x += val;
        else {
            if (val <= x)x -= val;
            else cnt += 1;
        }
    }
    cout << x << " " << cnt;
    return 0;
}
