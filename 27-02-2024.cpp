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

     int help(TreeNode *r,int &ans)
     {
         if(r==NULL)
         return 0;
         int maxLeftDepth=help(r->left,ans);
         int maxRightDepth=help(r->right,ans);
         ans=max(ans,maxLeftDepth+maxRightDepth);
         return 1+max(maxLeftDepth,maxRightDepth);
     }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        help(root,ans);
         return ans;
    }
};
