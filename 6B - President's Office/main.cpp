#include <bits/stdc++.h>
using namespace std;
bool isIn(char e,vector<char>v){
    for (int i = 0; i < v.size(); ++i) {
        if(v[i]==e) return true;
    }
    return false;
}

int main() {
//    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int m,n,cnt;
    char c;
    string line;
    cin>>n>>m>>c;
    vector<string> all_desks;
    vector<char> out;
    for (int i = 0; i < n ; ++i) {
        cin>>line;
        all_desks.push_back(line);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(all_desks[i][j] == c){
                if(i!=0 && all_desks[i-1][j]!=c && all_desks[i-1][j]!='.' && !isIn(all_desks[i-1][j],out)){
                    out.push_back(all_desks[i-1][j]);
                }
                if(i!=n-1 && all_desks[i+1][j]!=c && all_desks[i+1][j]!='.' && !isIn(all_desks[i+1][j],out)){
                    out.push_back(all_desks[i+1][j]);
                }
                if(j!=0 && all_desks[i][j-1]!=c && all_desks[i][j-1]!='.' && !isIn(all_desks[i][j-1],out)){
                    out.push_back(all_desks[i][j-1]);
                }
                if(j!=m-1 && all_desks[i][j+1]!=c && all_desks[i][j+1]!='.' && !isIn(all_desks[i][j+1],out)){
                    out.push_back(all_desks[i][j+1]);
                }
            }
        }
    }
    cout<<out.size();
    return 0;
}
