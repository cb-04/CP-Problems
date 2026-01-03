#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a,b;
    long long sumA=0,sumB=0;
    for(int i=n;i>=1;i--){
        if(sumA>sumB){
            sumB += i;
            b.push_back(i);
        }else{
            sumA += i;
            a.push_back(i);
        }
    }
    if(sumA==sumB){
        cout<<"YES\n";
        cout<<a.size()<<'\n';
        for(int x:a) cout<<x<<' ';
        cout<<'\n'<<b.size()<<'\n';
        for(int x:b) cout<<x<<' ';
        cout<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    return 0;
}