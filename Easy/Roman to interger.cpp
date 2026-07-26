#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int romanToInt(string s)
    {
        unordered_map<string,int> A{
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000}
        };
    int result = 0;
    // Duyệt qua từng ký tự trong chuỗi s
    for (int i = 0; i < s.length(); ++i) 
    {
        int curr = A[string(1, s[i])]; // Giá trị của ký tự hiện tại
        int next = (i + 1 < s.length()) ? A[string(1, s[i + 1])] : 0; // Giá trị ký tự tiếp theo (nếu có)
        // Nếu giá trị hiện tại nhỏ hơn giá trị tiếp theo, trừ đi giá trị hiện tại
        if (curr < next) 
            result -= curr;
        else 
            result += curr;
    }
    return result; // Trả về kết quả cuối cùng
}
};
