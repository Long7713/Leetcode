#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<int> current;
        vector<vector<int>> result;
        dfs(0, target, candidates, current, result);
        return result;
    }
    void dfs(int idx, int target, vector<int> &candidates, vector<int> &current, vector<vector<int>> &result)
    {
        if (target == 0)
        {
            result.push_back(current);
            return;
        }
        for (int i = idx; i < candidates.size(); i++)
        {
            if (candidates[i] > target)
                break;
            current.push_back(candidates[i]);
            dfs(i, target - candidates[i], candidates, current, result);
            current.pop_back();
        }
    }
};