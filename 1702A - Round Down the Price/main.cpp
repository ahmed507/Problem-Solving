#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   unsigned int t,m,out;
   cin>>t;
   while (t--){
       cin>>m;
       out = m - pow(10,to_string(m).length()-1);
       cout<<out<<'\n';
   }

   return 0;
}
