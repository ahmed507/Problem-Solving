//https://codeforces.com/problemset/problem/1702/B
#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   unsigned int t,cnt1,cnt2;
   string s;
   cin>>t;
   while (t--){
       vector<char>letters;
       cnt2=0;
       cnt1=0;
       cin>>s;
       for (int i = 0; i < s.length(); ++i) {
           if(cnt1 == 3 && !(find(letters.begin(),letters.end(),s[i])!=letters.end())){
               letters.clear();
               ++cnt2;
               cnt1 = 0;
           }

           if(!(find(letters.begin(),letters.end(),s[i])!=letters.end())) {
               letters.push_back(s[i]);
               ++cnt1;
           }
           if(i==s.length()-1 && cnt1>0)++cnt2;
       }
       cout<<cnt2<<'\n';
   }

   return 0;
}