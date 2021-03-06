// find middle of linked list (leetcode)
// Link to the problem - https://leetcode.com/problems/middle-of-the-linked-list/
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
    //slow fast pointers
    // TimeComplexity = O(n)
    // SpaceComplexity = O(1)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL&&f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
        }
       return s;
    }
};