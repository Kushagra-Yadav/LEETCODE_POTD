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

METHOD 1:

class Solution {
public:
 int len(ListNode *head)
 {
     int l=0;
     while(head!=NULL)
     {
         l++;
         head=head->next;
     }
     return l;
 }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=len(head);
        int from_start=l-n;
        if(l==n)
        return head->next;
        int actual_move=from_start-1;ListNode *prev=head;
        while(actual_move--)
            {
                prev=prev->next;
            }
            prev->next=prev->next->next;
            return head;

    }
};


METHOD-2
class Solution {
public:
int len(ListNode*h)
{
    int l=0;
    while(h!=NULL)
    {
        l++;
        h=h->next;
    }
    return l;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=len(head);
        int t=l-n-1;
        ListNode* h1=head;
        if(t==-1)
        {
          head=head->next;
        }
        else
        {
           while(t)
        {
            h1=h1->next;
            t--;
        }
        h1->next=h1->next->next;
        }
        
        return head;
    }

};
