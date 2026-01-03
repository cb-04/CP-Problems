#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long soln, tot_ways, wrong_ways;
    for(int i=1;i<=n;i++){
        if(i==1) soln=0;
        else if(i==2) soln=6;
        else if(i==3) soln=28;
        else{
            tot_ways = (1LL*i*i*(i*i-1))/2;
            wrong_ways = 1LL*4*(i-1)*(i-2);
            soln = tot_ways-wrong_ways;
        }
        cout<<soln<<'\n';
    }
    return 0;
}
