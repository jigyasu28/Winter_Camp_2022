#include <bits/stdc++.h>
using namespace std;

void printCommon(vector<int> v1, vector<int> v2, vector<int> v3)
{
    int i = 0, j = 0, k = 0;
    // cout<<v1.size()<<" "<<v2.size()<<" "<<v3.size()<<'\n';
    while (i < v1.size() && j < v2.size() && k < v3.size())
    {
        if (v1[i] == v2[j] && v2[j] == v3[k])
        {
            cout << v1[i] << " ";
            i++, j++, k++;
        }
        else if (v1[i] <= v2[j] && v1[i] <= v3[k])
        {
            i++;
        }
        else if (v2[j] <= v1[i] && v2[j] <= v3[k])
        {
            j++;
        }
        else if (v3[k] <= v1[i] && v3[k] <= v2[j])
        {
            k++;
        }
    }
}

int32_t main()
{
    // Code here.
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<int> v1(s1), v2(s2), v3(s3);
    for (int &i : v1)
        cin >> i;
    for (int &i : v2)
        cin >> i;
    for (int &i : v3)
        cin >> i;

    printCommon(v1, v2, v3);
    return 0;
}