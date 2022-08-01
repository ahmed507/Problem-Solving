//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1047
#include <bits/stdc++.h>
using namespace std;



int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    string y, x;
    int c,k,mul;
    int a[502];
    while(cin>>x>>y) {
        for (int i = 0; i < 502; i++)a[i] = -1;
        for (int i = x.length() - 1; i > -1; --i) {
            c = 0;
            for (int j = y.length() - 1; j > -1; --j) {
                k = (y.length() - 1 - j) + (x.length() - 1 - i);
                mul = ((int(x[i]) - 48) * (int(y[j]) - 48)) + c;
                if (a[k] == -1) {
                    a[k] = mul % 10;
                    c = (mul - (mul % 10)) / 10;
                } else {
                    a[k] += mul;
                    if (a[k] > 9) {
                        c = (a[k] - (a[k] % 10)) / 10;
                        a[k] = a[k] % 10;
                    } else{
                        c= 0;
                    }
                }
                if (j == 0 && c > 0) {
                    a[k + 1] = c;
                }
            }

        }
        //cout<<(int)'0' = 48;
        for (int i = 501; i > -1; --i) {
            if (a[i] > -1)cout << a[i];
        }
        cout<<'\n';
    }
    return 0;
}
