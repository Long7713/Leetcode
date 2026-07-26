#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;//key= giá trị số,value=index
        for(int i=0;i<nums.size();i++)
        {
            int need = target-nums[i];// giá trị còn thiếu để đạt giá trị yêu cầu 
              
        //kiểm tra nếu có giá trị(số) cần có nằm trong map hay không
        if(mp.find(need)!=mp.end())
        {
            return {mp[need],i};
        }
        mp[nums[i]]=i;
        }
        return {}; //is cant find
    }
};
int main()
{
    int n,target;
    cout<<"enter a range";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter value for every elements";
    cin>>target;
    Solution s;
    
}
    
