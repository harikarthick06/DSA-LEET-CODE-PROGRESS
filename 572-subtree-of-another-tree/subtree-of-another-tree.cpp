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
    string preorder(TreeNode* node) {
        if (node == NULL) {
            return "N,";
        }

        return "#" + to_string(node->val) + "," +
               preorder(node->left) +
               preorder(node->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string fullTree = preorder(root);
        string subTree = preorder(subRoot);

        return fullTree.find(subTree) != string::npos;
    }
};