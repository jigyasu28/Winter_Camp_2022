#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lower(vector<int> arr, int target, int n)
{
    int low = 0, high = n;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
            high = mid;
        else if (arr[mid] < target)
            low = mid + 1;
    }
    return low;
}

int upper(vector<int> arr, int target, int n)
{
    int low = 0, high = n;
    while (high - low > 1)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= target)
            low = mid;
        else if (arr[mid] > target)
            high = mid - 1;
    }
    return high;
}

int main()
{
    //   int arr[10] = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8};
    int n, target, ans = 0;
    cin >> n >> target;
    vector<int> arr(n);
    for (int &i : arr)
        cin >> i;
    int low = lower(arr, target, n);
    int high = lower(arr, target + 1, n);
    cout << high - low << '\n';
    return 0;
}