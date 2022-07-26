#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<char>o;
    cin>>s;

    for (int i = 0; i < s.length(); ++i) {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            o.push_back(' ');
            i+=2;
        } else{
            o.push_back(s[i]);
        }
    }
    for (int i = 0; i < o.size(); ++i) {
        if(o[i]==' ' &&o[i-1]==' '){
            continue;
        }
        else cout<<o[i];
    }

    return 0;
}
