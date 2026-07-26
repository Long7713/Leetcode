#include <bits/stdc++.h>
using namespace std;
vector<int> nums;

int solution()
{
    sort(nums.begin(), nums.end());
    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());
    return nums.size();
}