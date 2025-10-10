//XORwice
//https://codeforces.com/problemset/problem/1421/A

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
        int a,b;
        cin>>a>>b;
        cout<<(a^b)<<'\n';
    }
    

    return 0;
}