#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int Can=right*min(height[0],height[right]);
        int l=0;
       while(l<right)
       {
          int bottle=(right-l)*min(height[l],height[right]);
                 if(Can<bottle)
                {
                    Can=bottle;
                }
                if(height[l]>height[right])
                {
                    right--;
                    l--;
                }
                l++;
       }
       return Can;
    }
};