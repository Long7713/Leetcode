#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        while (!s.empty() && s.back() == ' ')
            s.pop_back();
        size_t pos = s.find_last_of(' ');
        string lastworld = s.substr(pos + 1);
        return lastworld.size();
    }
};