/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        int l=0;
         queue<TreeNode*>q;
         q.push(root);
         while(!q.empty())
         {
             int n=q.size();
             int last;
             for(int i=1;i<=n;i++)
             {
                 TreeNode *t=q.front();
                 if(i==1)
                 {
                     last=q.front()->val;
                     q.pop();
                     if((last%2==0 && l%2==0)||(last%2!=0 && l%2!=0))
                     return false;
                   
                 }
                else {
                    if(l%2==0)
                 {
                     int curr=q.front()->val;
                     q.pop();
                     if(curr%2==0)return false;
                     if(curr<=last)return false;
                     last=curr;
                 }
                    else
                    {
                        int curr=q.front()->val;
                        q.pop();
                        if(curr%2!=0)return false;
                        if(curr>=last)return false;
                        last=curr;
                    }
                }
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
             }
             l++;
         }
         return true;
    }
};
