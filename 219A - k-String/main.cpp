#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int k;
    string s;
    cin>>k;
    bool k_string= true;
    vector<char>out;
    cin>>s;
    map<char,int> counter;
    for (int i = 0; i < s.length(); ++i) {
        ++counter[s[i]];
    }
    for(const auto&i: counter){
        if(i.second%k!=0) {
            k_string= false;
            break;
        }
    }
    if(k_string){
        for (int i = 0; i < k; ++i) {
            for (const auto&j: counter) {
                for (int l = 0; l < j.second/k; ++l) {
                    out.push_back(j.first);
                }
            }
        }
        for (int i = 0; i < out.size(); ++i) {
            cout<<out[i];
        }

    } else cout<<-1;
    return 0;
}
