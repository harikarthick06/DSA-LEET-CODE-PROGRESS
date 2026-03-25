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
    int maxi=INT_MIN;
    int maxPathSum(TreeNode* root) {
        solve(root);

        return maxi;
        
    }
    int solve(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lh=max(0,solve(root->left));
        int rh=max(0,solve(root->right));

        maxi=max(root->val+rh+lh,maxi);

        return root->val+max(lh,rh);

    }
};