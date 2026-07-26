#include <bits/stdc++.h>
using namespace std;
vector<bool> prefixesDivby5(vector<int> &nums)
{
    vector<bool> check;
    int n = 0;
    for (auto bit : nums)
    {
        n = (n * 2 + bit) % 5;
        check.push_back(n == 0);
    }
    return check;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    prefixesDivby5(nums);
    for (bool x : nums)
    {
        cout << (x ? " true" : " false");
    }
    return 0;
}