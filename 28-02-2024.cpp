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
    void help(TreeNode*r,int depth,int &ans,int &maxDepth)
    {
        if(r==NULL)
        return;
        if(depth>maxDepth)
       {
           maxDepth=depth;
           ans=r->val;
       }
       help(r->left,depth+1,ans,maxDepth);
       help(r->right,depth+1,ans,maxDepth);
       

    }
    int findBottomLeftValue(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        return root->val;
        int ans=0;int maxDepth=0;
         help(root,0,ans,maxDepth);
         return ans;
    }
};
