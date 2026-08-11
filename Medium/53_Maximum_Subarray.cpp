#include <stdio.h>
#include <climits>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total=0;
        int max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
               total+=nums[i];  
               max_sum=max(max_sum,total);
            if(total<0)
            {
                total=0;
            }
        
            
        }

        return max_sum;
    }
};