//https://codeforces.com/problemset/problem/770/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string letters = "abcdefghijklmnopqrstuvwxyz";
    vector<char>password;
    int n,k;
    cin>>n>>k;
    while(n>0){
        for (int i = 0; i < k; i++)
        {
            password.push_back(letters[i]);
            --n;
            if(n==0)break;
        }       
        
    }
    for (int i = 0; i < password.size(); i++){
        cout<<password[i];
    }
    
    

    return 0;
}
