#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, x;

    map<int, int> a;
    bool sol = true;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 5 || x == 7) {
            sol = false;
            break;
        }
        ++a[x];
    }
    if((a[1]==n/3)&&(a[2]+a[3]==n/3)&&(a[4]+a[6]==n/3)&&(a[2]>=a[4])&&a[6]>=a[3] &&sol){
        while (a[1] != 0 && a[2] != 0 && a[4] != 0) {
            cout << "1 2 4\n";
            --a[1];
            --a[2];
            --a[4];
        }
        while (a[1] != 0 && a[2] != 0 && a[6] != 0) {
            cout << "1 2 6\n";
            --a[1];
            --a[2];
            --a[6];
        }
        while (a[1] != 0 && a[3] != 0 && a[6] != 0) {
            cout << "1 3 6\n";
            --a[1];
            --a[3];
            --a[6];
        }
    }
    else sol=false;
    if(!sol)cout<<"-1\n";
    return 0;
}
