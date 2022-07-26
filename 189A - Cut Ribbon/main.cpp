#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int a,b,c,n,x,y;
    cin>>n>>a>>b>>c;
    vector<int> p = {a,b,c};
    vector<int> out;
    std::sort(p.begin(), p.end());
    int arr[3][n+1];
    for (int i = 0; i < 3; ++i) {
        arr[i][0]=0;
        for (int j = 1; j < n+1; ++j) {
            if(i==0){
                if(j<p[i]){
                    arr[i][j]=0;
                } else{
                    if(j%p[i]==0){
                        arr[i][j]=j/p[i];

                    } else{
                        arr[i][j]=0;
//                        cout<<"k\n";
                    }
                }
            }
            else{
                if(j<p[i]){
                    arr[i][j]=arr[i-1][j];
                } else{
                    x = j/p[i];
                    y = j%p[i];
                    arr[i][j]=max(x+arr[i][y],arr[i-1][j]);
                }
            }
            if (j==n){
                out.push_back(arr[i][j]);
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
//        cout<<p[i]<<" ";
        for (int j = 0; j < n+1; ++j) {
            cout<<arr[i][j]<<' ';
        }
        cout<<"\n";
    }
//
//    for (int i = 0; i < out.size(); ++i) {
//        cout<<out[i]<<' ';
//    }
//    cout<<*max_element(out.begin(),out.end());
    return 0;
}
