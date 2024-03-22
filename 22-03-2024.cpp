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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
          ListNode* templ=head;
          int l=0;
          while(templ!=NULL)
          {
              l++;
              templ=templ->next;
          }
          if(l==1)
          return true;
          l=l%2==0?l/2:(l/2)+1;
           while(l-1>0)
           {
               temp=temp->next;
               l--;
           }
           
           ListNode* prev=NULL;
           ListNode* curr=temp->next;
           ListNode* nextp;
           while(curr->next!=NULL)
           {
               nextp=curr->next;
               curr->next=prev;
               prev=curr;
               curr=nextp;

           }
           curr->next=prev;
           temp->next=curr;
           while(temp->next!=NULL)
           {
               temp=temp->next;
               if(head->val!=temp->val)
               return false;
               head=head->next;
           }
           return true;
    }
};
