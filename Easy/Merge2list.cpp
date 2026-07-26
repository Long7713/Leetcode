#include <bits/stdc++.h>
using namespace std;
// danh sách kề sử dụng listnode để trỏ tới con trỏ tiếp theo
struct ListNode
{
    int data;                                                // lưu giá trị tại node đó
    ListNode *next;                                          // next trỏ đến node tiếp theo
    ListNode() : data(0), next(nullptr) {}                   // với giá trị ban đầu chưa có node liền kề và không có giá trị thì dta=0 và con trỏ kề nó là null
    ListNode(int x) : data(x), next(nullptr) {}              // khi có giá trị thì giá trị là x nhưng nếu không có node kế thì next vẫn nullptr
    ListNode(int x, ListNode *next) : data(x), next(next) {} // khi có giá trị và node kế tiếp thì cho có giá trị và tỏ tới node kế tiếp
};
class Solution
{
public:
    // từ 2 danh sách kề ,ta gộp cả 2 trả về 1 danh sách kề bằng merge sort
    // ListNode* ... : như 1 loại gọi merge.. là 1 con trỏ có 2 con trỏ con đang xét danh sách
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy = new ListNode(); // cap phat vung nho heap moi  trong danh sách kết quả
        ListNode *tail = dummy;           // đi theo dummy
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->data <= list2->data) // nếu danh sách 1 trỏ tới data của danh sách 1 nhỏ hơn data danh sách 2 thì thực hiện
            {
                tail->next = list1;  // gán node mà list 1 đang trỏ tới vào next
                list1 = list1->next; // cập nhật list node đến vị trí tiếp theo của nó
            }
            else // tương tự với list2
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // cập nhật lại tail  phải đứng cuối của danh sách
        }
        if (list1 != nullptr) // nếu chưa kiểm hết danh sách của list 1 thì tiếp tục kiếm
            tail->next = list1;
        else // tương
            tail->next = list2;

        return dummy->next; // trả lại node kế tiếp
    }
};
