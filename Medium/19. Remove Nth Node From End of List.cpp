#include <stdio.h>
#include <list>
using namespace std;
  //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *current=&dummy;
        ListNode *prev=&dummy;
        
        if(current->next==nullptr)
            return head;
        for(int i=0;i<n;i++)
            current=current->next;
        while(current!=nullptr)
        { 
            
             if(current->next==nullptr)
             {
                prev->next=prev->next->next;
                break;
             }
             current=current->next;
            prev=prev->next;
            
           
        }
        return dummy.next;
    }
};