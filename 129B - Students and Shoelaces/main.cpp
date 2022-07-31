#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, tmp1, tmp2, kick = 0;
    cin >> n >> m;
    vector<set<int>> relations(n + 1);
    while (m--) {
        cin >> tmp1 >> tmp2;
        relations[tmp1].insert(tmp2);
        relations[tmp2].insert(tmp1);
    }
    while (true) {
        vector<int> k;
        for (int i = 0; i < n + 1; ++i) {
            if (relations[i].size() == 1) {
                k.push_back(i);
            }
        }
        for(int i : k){
            relations[*relations[i].begin()].erase(i);
            relations[i].clear();
        }
        if (k.size())++kick;
        else break;

    }
    cout << kick;

    return 0;
}
