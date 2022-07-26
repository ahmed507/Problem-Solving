#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m,x,y,k,dx,dy;
    long long int total_steps = 0;
    cin>>n>>m;
    cin>>x>>y;
    cin>>k;
    for(int i=0;i<k;++i){
        cin>>dx>>dy;
        int steps_y= 1000000000;
        int steps_x= 1000000000;
        if (dx>0){
            steps_x = (n-x)/dx;
        }
        else if (dx<0){
            steps_x = (x-1)/(-1*dx);
        }
        if (dy>0){
            steps_y = (m-y)/dy;
        }
        else if (dy<0){
            steps_y = (y-1)/(-1*dy);
        }
        int steps = 0;
        if (steps_x>0 && steps_y>0){
            steps = min(steps_x,steps_y);
        }
        x+=steps*dx;
        y+=steps*dy;
        total_steps += steps;
    }
    cout<<total_steps;
    return 0;
}
