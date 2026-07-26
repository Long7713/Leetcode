#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        int k;
        for (int i = 0; i < bits.size(); i++)
        {
            if (bits[i] == 1)
            {
                i++;
                if (i >= bits.size())
                    return false;
            }
            else if (bits[i] == 0)
            {
                int k = i;
                if (k == bits.size() - 1)
                    return true;
            }
        }
        return 0;
    }
};