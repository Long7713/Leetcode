#include <bits/stdc++.h>
using namespace std;
vector<int> &nums;
int val;
int removeelements()
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}