#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        long long k = 0;
        if (x > INT_MAX || x < INT_MIN)
            return 0;
        while (x != 0)
        {
            k = k * 10 + x % 10;
            x /= 10;
        }
        if (k > INT_MAX || k < INT_MIN)
            return 0;
        return k;
    }
};