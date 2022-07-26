#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned int t,n,k,a,b,s;

    cin>>t;
    while (t--){
        map<unsigned int,vector<unsigned int>>stations;
        cin>>n>>k;
        for (int i = 0; i < n; ++i) {
            cin>>s;
            stations[s].push_back(i);
        }

        for (int i = 0; i < k; ++i) {
            cin>>a>>b;
            if(!stations[a].empty()&&!stations[b].empty()) {
                if (*max_element(stations[b].begin(), stations[b].end()) >
                    *min_element(stations[a].begin(), stations[a].end()))
                    cout << "YES\n";
                else cout << "NO\n";
            }
            else cout << "NO\n";
        }

    }

    return 0;
}