// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect.
// If the two linked lists have no intersection at all, return null.
// For example, the following two linked lists begin to intersect at node c1:
// Giải thích đơn giản là đây là 1 bài 2 danh sách liên kết
// Mục đích là tìm xem 2 con trỏ ban đầu ở 2 linked list tới cùng có trỏ về chung 1 địa chỉ không
// ý niệm để giải bài toán này dùng 2 con trỏ trỏ vào 2 đầu của danh sách
// Ta dùng vùng while cho tới khi nào cả 2 node đều trỏ chung về 1 địa chỉ,
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *getintersectionNode(ListNode *headA, ListNode *headB)
{
    if (!headA || !headB)
        return nullptr;
    ListNode *pA = headA;
    ListNode *pB = headB;
    while (pA != pB)
    {
        pA = (pA == nullptr) ? headB : pA = pA->next;
        pB = (pB == nullptr) ? headA : pB = pB->next;
    }
    return pA;
}