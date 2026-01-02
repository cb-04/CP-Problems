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

bool prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool all_divisible(vector<int> a, int n)
{
    for (auto e : a)
    {
        if (e % n != 0)
            return false;
    }
    return true;
}

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int ans = 2;
        int flag = 0;
        while (ans <= 1e18)
        {
            if (prime(ans) && all_divisible(a, ans) == false)
            {
                cout << ans << '\n';
                flag++;
                break;
            }
            ans++;
        }
        if (flag == 0)
            cout << -1 << '\n';
    }

    return 0;
}