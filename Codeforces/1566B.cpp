//MIN-MEX CUT
//https://codeforces.com/problemset/problem/1566/B

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <sstream>
#include <string>
#include <tuple>
#include <deque>
#include <bitset>
#include <numeric>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        bool zero = false, one = false;
        int num_of_0_segments = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') zero = true;
            if(s[i]=='1') one = true;
            if(s[i]=='0' && (i+1==s.length() || s[i+1]=='1')) num_of_0_segments++;
        }
        int ans;
        if(!zero) ans = 0;
        else if(!one) ans = 1;
        else{
            ans = min(num_of_0_segments,2);
        }
        cout<<ans<<'\n';
    }
    

    return 0;
}