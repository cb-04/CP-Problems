// Beautiful Palindromes
// https://codeforces.com/problemset/problem/2162/B

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
        cin >> n;
        string s;
        cin >> s;

        vector<int> indices;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                indices.push_back(i + 1);
        }

        cout << indices.size() << '\n';
        for (int v : indices)
            cout << v << ' ';
        cout << '\n';
    }
    return 0;
}