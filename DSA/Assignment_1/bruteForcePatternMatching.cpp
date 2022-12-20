#include <bits/stdc++.h>
using namespace std;

bool patternMatch(string text, string pat)
{
    int n = text.size(), m = pat.size();
    for (int i = 0; i <= n - m; i++)
    {
        int idx = i;
        for (int j = 0; j < m; j++)
        {
            if (text[idx] == pat[j])
            {
                idx++;
            }
            else
                break;
        }
        if ((idx - i) == m)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    // Code here.
    string text, pat;
    cin >> text >> pat;
    cout << ((patternMatch(text, pat) == true) ? "Pattern Found" : "Pattern Not Found") << '\n';
    return 0;
}