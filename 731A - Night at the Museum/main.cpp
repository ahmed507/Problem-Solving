//https://codeforces.com/problemset/problem/731/A
#include <bits/stdc++.h>
using namespace std;
//a = 97
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string alphabets="abcdefghijklmnopqrstuvwxyz";
    string s;
    int left,right,cur=0,cnt=0;
    cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        right=0;
        left=0;
        for (int j = cur; ; ++j) {
            if(j==26){
                j= 0;
            }
            if (s[i]== alphabets[j])break;
            ++right;
        }
        for (int j = cur;; --j) {
            if(j==-1){
                j= 25;
            }

            if (s[i]== alphabets[j]){
                cur=j;
                break;
            }
            ++left;

        }
        cnt+=min(left,right);
    }
    cout<<cnt;
    return 0;
}
