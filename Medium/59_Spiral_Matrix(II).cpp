#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // Tạo matrix ban đầu toàn số 0
        vector<vector<int>> matrix(n, vector<int>(n, 0));

        int row = 0;
        int col = 0;
        int direction = 0;

        // 0: right
        // 1: down
        // 2: left
        // 3: up

        // Thay đổi row, col tương ứng với 4 hướng
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        for (int num = 1; num <= n * n; num++) {
            matrix[row][col] = num;

            int nextRow = row + dr[direction];
            int nextCol = col + dc[direction];

            // Nếu ô tiếp theo không hợp lệ
            if (nextRow < 0 || nextRow >= n ||
                nextCol < 0 || nextCol >= n ||
                matrix[nextRow][nextCol] != 0) {

                // Đổi hướng
                direction = (direction + 1) % 4;

                // Tính lại vị trí tiếp theo
                nextRow = row + dr[direction];
                nextCol = col + dc[direction];
            }

            row = nextRow;
            col = nextCol;
        }

        return matrix;
    }
};