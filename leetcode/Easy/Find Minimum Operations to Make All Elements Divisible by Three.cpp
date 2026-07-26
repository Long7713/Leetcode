#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int k = 0;
        for (auto s : nums)
        {
            while (s % 3 != 0)
            {
                s++;
                if (s % 3 == 0)
                    k++;
            }
        }
        return k;
    }
};