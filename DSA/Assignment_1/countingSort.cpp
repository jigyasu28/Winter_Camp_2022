#include <bits/stdc++.h>
using namespace std;



void counting_sort()
{
    string str;
    cin >> str;
    vector<int> v(26, 0);
    for (char c : str)
    {
        int temp = c;
        v[temp - 65] += 1;
    }
    int start = 0;
    for (int i = 0; i < 26; i++)
    {
        int temp = v[i];
        while (temp--)
        {
            char c = 65 + i;
            str[start] = c;
            start++;
        }
    }
    cout << str << '\n';
}

int32_t main()
{
    // Code here.

    counting_sort();
    // radix_sort();
    return 0;
}

void radix_sort()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    vector<vector<int>> freq(10);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = v[i], size = 0;
        while (temp != 0)
        {
            temp /= 10;
            size++;
        }
        if (size > max)
            max = size;
    }
    int size = 0;
    while (size < max)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = v[i];
            int wh = size;
            while (wh--)
            {
                temp /= 10;
            }
            int idx = temp % 10;
            freq[idx].push_back(v[i]);
        }
        int i = 0;
        for (auto it : freq)
        {
            for (auto itr : it)
            {
                v[i] = itr;
                i++;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            freq[i].clear();
        }
        size++;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << '\n';
}