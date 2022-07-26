#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<char,int>c;
    c['A']=0;c['B']=0;c['C']=0;
    string condition,out="xxx";
    for (int i = 0; i < 3; i++){
        cin>>condition;
        if(condition[1]=='>'){
            ++c[condition[0]];
        }
        else{
            ++c[condition[2]];
        }
    }
    bool possible = true;
    for (auto const& [key,val]:c){
        if(val==0&&out[0]=='x')out[0]=key;
        else if(val == 1 && out[1]=='x')out[1]=key;
        else if(val == 2 && out[2]=='x')out[2]=key;
        else{
            possible = false;
            break;
        }
    }
    if(possible)cout<<out;
    else cout<<"Impossible";


    return 0;
}
