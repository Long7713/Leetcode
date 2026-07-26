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
ListNode *deletedipli(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *current = head;
    while (current->next != NULL)
        if (current->val == current->next->val)
            current->next = current->next->next;
        else
            current = current->next;
    return head;
}