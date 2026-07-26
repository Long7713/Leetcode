#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minprices = INT_MAX;
        int maxprofit = 0;
        for (int c : prices)
        {
            if (c < minprices)
                minprices = c;
            else if (c - minprices > maxprofit)
                maxprofit = c - minprices;
        }
        return maxprofit;
    }
};