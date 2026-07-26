#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(const string &s)
    {
        int i = 0;
        int j = (int)s.size() - 1;
        while (i < j)
        {
            while (i < j && !isalnum(static_cast<unsigned char>(s[i])))
                ++i;
            while (i < j && !isalnum(static_cast<unsigned char>(s[j])))
                --j;
            if (i >= j)
                break;
            char ci = static_cast<char>(tolower(static_cast<unsigned char>(s[i])));
            char cj = static_cast<char>(tolower(static_cast<unsigned char>(s[j])));

            if (ci != cj)
                return false;
            ++i;
            --j;
        }
        return true;
    }
};