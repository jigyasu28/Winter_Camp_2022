#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    // Code here.
    int n, max = 0;
    cin >> n;
    unordered_map<int, int> mp;
    int time;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> time;
        mp[time]++;
    }
    for (auto it : mp)
    {
        if (it.second > max)
            max = it.second;
    }
    cout << max << '\n';
    return 0;
}