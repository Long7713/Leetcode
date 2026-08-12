#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // key -> nhóm các string
        unordered_map<string, vector<string>> groups;

        for (string word : strs) {

            // Bước 1: tạo bảng đếm 26 ký tự
            vector<int> count(26, 0);

            // Bước 2: đếm từng ký tự
            for (char c : word) {
                count[c - 'a']++;
            }

            // Bước 3: biến bảng đếm thành string key
            string key = "";

            for (int num : count) {
                key += to_string(num) + "#";
            }

            // Bước 4:
            // Nếu key chưa tồn tại → [] tự tạo vector mới
            // Nếu đã tồn tại → lấy vector cũ
            groups[key].push_back(word);
        }

        // Bước 5: lấy các nhóm từ map ra kết quả
        vector<vector<string>> result;

        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};