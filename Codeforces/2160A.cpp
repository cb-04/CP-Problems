// MEX Partition
// https://codeforces.com/problemset/problem/2160/A

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
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<int> present(101,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            present[arr[i]] = 1;
        }
        bool all_present = true;
        for(int i=0;i<=100;i++){
            if(present[i]==0){
                cout<<i<<'\n';
                all_present = false;
                break;
            }
        }
        if(all_present) cout<<101<<'\n';
    }
    return 0;
}