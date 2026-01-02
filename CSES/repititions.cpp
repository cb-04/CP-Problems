#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    int c = 0,maxc = 0;
    while(i<s.length()){
        if(i==0 || s[i]==s[i-1]){
            c++;
        }else{
            maxc = max(maxc,c);
            c = 1;
        }
        i++;
    }
    maxc = max(maxc,c);
    cout<<maxc<<'\n';
    return 0;
}