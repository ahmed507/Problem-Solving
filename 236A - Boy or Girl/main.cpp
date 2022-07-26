#include <iostream>
using namespace std;
string sol(string name){
    int letters[26]={};
    int cnt=0;
    for(char i : name){
        letters[int(i)-97]+=1;
    }
    for(int j :letters){
        if(j>=1) cnt+=1;
    }
    if(cnt%2==0)
        return "CHAT WITH HER!";
    else
        return "IGNORE HIM!";
}

int main(){
    string name;
    cin>>name;
    cout<<sol(name);

}
