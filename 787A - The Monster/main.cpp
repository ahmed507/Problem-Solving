//https://codeforces.com/problemset/problem/787/A
#include <bits/stdc++.h>
using namespace std;
bool is_integer(float k)
{
    return std::floor(k) == k;
}
int sol(int a,int b,int c,int d){
    for (double i = 0; i < 101; ++i) {
        if(is_integer(((d+i*c)-b)/a) && ((d+i*c)-b)/a >=0)return ((d+i*c)-b)/a;
    }
    return -1;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int a,b,c,d;
    double n,m=0;
    cin>>a>>b;
    cin>>c>>d;
    if(sol(a,b,c,d)!=-1)cout<<sol(a,b,c,d)*a+b;
    else cout<<sol(a,b,c,d);
    return 0;
}
