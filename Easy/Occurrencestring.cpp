#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        size_t pos = needle.find(haystack);
        if (pos != string::npos)
            return pos;
        else
            return -1;
    }
};