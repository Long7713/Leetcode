#include <stdio.h>
#include <vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode* current = &dummy;

        while (true) {
            int minIndex = -1;

            // Tìm node nhỏ nhất trong các list hiện tại
            for (int i = 0; i < lists.size(); i++) {
                
                // Nếu list này vẫn còn node
                if (lists[i] != nullptr) {
                    
                    // Chưa có node nhỏ nhất
                    // hoặc tìm thấy node nhỏ hơn
                    if (minIndex == -1 ||
                        lists[i]->val < lists[minIndex]->val) {
                        
                        minIndex = i;
                    }
                }
            }

            // Tất cả list đều đã hết
            if (minIndex == -1) {
                break;
            }

            // Nối node nhỏ nhất vào kết quả
            current->next = lists[minIndex];

            // Di chuyển current của result
            current = current->next;

            // Chỉ đẩy list chứa node nhỏ nhất đi tiếp
            lists[minIndex] = lists[minIndex]->next;
        }

        return dummy.next;
    }
};