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
    ListNode *partialRev(ListNode *h)
    {
      ListNode *prev=NULL;
      ListNode  *nxt;
      while(h!=NULL)
      {
        nxt=h->next;
        h->next=prev;
        prev=h;
        h=nxt;
      }
      return prev;
    }
public:
int len(ListNode *h)
{
    int l=0;
    while(h!=NULL)
    {
        l++;
        h=h->next;
    }
    return l;
}
    void reorderList(ListNode* head) {
        int l=len(head);
        int t=l/2;
        ListNode *q=head;
       for(int i=1;i<t;i++)
        {
            q=q->next;
        }
         ListNode *head2=partialRev(q->next);
         q->next=NULL;
         ListNode *head1=head;
         while(head1->next!=NULL)
         {
            ListNode *t1=head1->next;
            ListNode *t2=head2->next;
            head1->next=head2;
            head2->next=t1;
            head1=t1;
            head2=t2;
         }
           
           head1->next=head2;
         
         
    }
};
