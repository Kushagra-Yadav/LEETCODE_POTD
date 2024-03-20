/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *l,*r;
        int ct=0;
        ListNode *t=list1;
        while(ct<=b)
        {
          if(ct==a-1)
          {
            l=t;
          }
          if(ct==b)
          {
            r=t;
          }
          ct++;
          t=t->next;
        }
        l->next=list2;
        while(list2->next!=NULL)
        {
            list2=list2->next;
        }
        list2->next=r->next;
        return list1;
    }
};
