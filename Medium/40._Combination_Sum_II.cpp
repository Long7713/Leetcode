#include <stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(vector<int>& candidates, int target, int start, int sum) {
        if (sum == target) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Bỏ qua các giá trị trùng ở cùng một tầng
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Vì đã sort nên nếu vượt target thì dừng luôn
            if (sum + candidates[i] > target)
                break;

            path.push_back(candidates[i]);

            dfs(candidates, target, i + 1, sum + candidates[i]);

            path.pop_back(); // Backtracking
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        dfs(candidates, target, 0, 0);

        return ans;
    }
};