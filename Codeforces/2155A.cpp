// El Fucho
// https://codeforces.com/problemset/problem/2155/A

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
        int winner = n, loser = 0;
        int matches = 0;
        while(winner!=1){
            if(winner%2==0){
                winner = winner/2;
                loser += winner/2;
                matches += winner/2;
            }else{
                winner = winner/2+1;
                loser += winner/2;
                matches += winner/2;
            }
        }
        while(loser!=1){
            if(loser%2==0){
                loser /= 2;
                matches += loser/2;
            }else{
                loser = loser/2+1;
                matches += loser/2;
            }
        }
        cout<<matches<<'\n';

    }
    return 0;
}