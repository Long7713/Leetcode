#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        int n = 1;
        vector<vector<int>> gen(numRows);
        for (int i = 0; i < numRows; i++)
        {
            gen[i].resize(i + 1);
            gen[i][0] = gen[i][i] = 1;
            for (int k = 1; k < i; k++)
            {
                gen[i][k] = gen[i - 1][k - 1] + gen[i - 1][k];
            }
        }
        return gen;
    }
};