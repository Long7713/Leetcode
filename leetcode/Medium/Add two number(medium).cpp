#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *left, ListNode *right) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumebrs(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *res = dummy;
        int total = 0, cur = 0;
        while (l1 || l2 || cur)
        {
            total = cur;
            if (l1)
            {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                total += l2->val;
                l2 = l2->next;
            }
            int num = total % 10;
            cur = total / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }
        ListNode *result = res->next;
        delete res;
        return result;
    }
};