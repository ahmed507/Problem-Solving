//https://codeforces.com/problemset/problem/451/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,tmp;
    cin >> n;
    vector<long int>a,sorted_a;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        a.push_back(tmp);
    }
    sorted_a = a;
    std::sort(sorted_a.begin(), sorted_a.end());
    int l=0,r=n-1,start,end;
    bool stop_l=false,stop_r=false,is_yes=true;
    while ((!stop_l||!stop_r)&&l<n&&r>-1){
        if(a[l]!=sorted_a[l]&&!stop_l){
            stop_l = true;
            start = l;
        }
        if(a[r]!=sorted_a[r]&&!stop_r){
            stop_r = true;
            end = r;
        }
        ++l;
        --r;
    }
    if(!stop_l&&!stop_r)cout<<"yes\n1 1";
    else{
        for (int i = 0; i <= end-start && is_yes; ++i) {
            if (a[i+start]!=sorted_a[end-i])is_yes=false;
        }
        if(is_yes){
            cout<<"yes\n"<<start+1<<' '<<end+1;
        }
        else cout<<"no";
    }


    return 0;
}
