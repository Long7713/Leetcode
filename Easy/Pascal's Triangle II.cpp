#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> getrow;
        vector<vector<int>> get(rowIndex + 1);
        for (int i = 0; i <= rowIndex; i++)
        {
            get[i].resize(i + 1);
            get[i][0] = get[i][i] = 1;
            for (int k = 1; k < i; k++)
                get[i][k] = get[i - 1][k - 1] + get[i - 1][k];

            if (i == rowIndex)
            {
                for (int k = 0; k <= rowIndex; k++)
                    getrow.push_back(get[i][k]);
            }
        }

        return getrow;
    }
};