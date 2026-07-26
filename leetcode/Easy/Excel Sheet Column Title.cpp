// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
// cach giai deo hieu gi
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string res;
        long long n = columnNumber;
        while (n > 0)
        {
            n--;
            int rem = n % 26;
            res.push_back('A' + rem);
            n /= 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};