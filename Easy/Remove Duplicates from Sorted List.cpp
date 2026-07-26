#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

ListNode *deletedup(ListNode *head)
{
    ListNode *current = head; // con tro xet vi tri hien tai
    while (current != nullptr && current->next != nullptr)
    {
        if (current->val == current->next->val)
        {
            ListNode *temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
            current = current->next;
    }
    return head;
}
int main()
{
}