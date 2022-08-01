//https://codeforces.com/contest/476/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    int sent=0;
    int received_plus_minus=0;
    int received_questions=0;
    vector<int>plus_minus ={-1,1};
    cin>>s1>>s2;
    for (int i = 0; i < s1.length(); ++i) {
        if(s1[i]=='+')++sent;
        else --sent;
    }
    for (int i = 0; i < s2.length(); ++i) {
        if(s2[i]=='+')++received_plus_minus;
        else if(s2[i]=='-')--received_plus_minus;
        else ++received_questions;
    }
    vector<int>questions((int)pow(2,received_questions),received_plus_minus);
    int x= 0;
    for (int i = 0; i < received_questions; ++i) {
        int index = 0;
        for (int j = 0; j < int(questions.size()/int(pow(2,i))); ++j) {
            for (int k = 0; k < int(pow(2,i)); ++k) {
                questions[index]+=plus_minus[x];
                ++index;
            }
            ++x;
            x%=2;
        }
    }
    double cnt=0;
    for (int i = 0; i < questions.size(); ++i) {
        if(questions[i]==sent)++cnt;
    }
    cout.precision(12);
    cout<<fixed<<cnt/double(questions.size());
    return 0;
}
