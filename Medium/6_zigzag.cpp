#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {   if (numRows == 1) return s;
    
    int n = s.length();
    vector<string> matrix(numRows, string(n, '\0')); // '\0' đánh dấu ô trống

    int row = 0, col = 0;
    int direction = 1; // 1 = xuống, -1 = lên

    for (int i = 0; i < n; i++) {
        matrix[row][col] = s[i];

        if (row == 0) direction = 1;
        else if (row == numRows - 1) direction = -1;

        if (direction == 1) {
            row++;           // đi xuống: cùng cột
        } else {
            row--;
            col++;            // đi lên: sang cột mới
        }
    }

    string result = "";
    for (int r = 0; r < numRows; r++) {
        for (int c = 0; c < n; c++) {
            if (matrix[r][c] != '\0') result += matrix[r][c];
        }
    }
    return result;
        
    }
};