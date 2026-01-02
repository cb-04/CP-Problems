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
        int n;
        cin>>n;
        vector<int> a(n);
        bool even=false,odd=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even=true;
            else odd = true;
        }
        if(even && odd) sort(a.begin(),a.end());

        for(int i=0;i<n;i++) cout<<a[i]<<' ';
        cout<<'\n';

    }
    

    return 0;
}