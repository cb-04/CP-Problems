#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
 1  2  9  10
 4  3  8  11
 5  6  7  12
 16 15 14 13
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        long long layer_no = max(x,y);
        long long ans;
        if(layer_no==x){
            if(x%2==0){
                ans = (x-1)*(x-1)+1+y-1;
            }else{
                ans = x*x-y+1;
            }
        }else{
            if(y%2==0){
                ans = y*y-x+1;
            }else{
                ans = (y-1)*(y-1)+1+x-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}