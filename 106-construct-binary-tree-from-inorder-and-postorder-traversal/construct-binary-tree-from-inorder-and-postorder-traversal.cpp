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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()){
            return NULL;
        }
        map<int,int>hm;
        for(int i=0;i<inorder.size();i++){
            hm[inorder[i]]=i;
            
        }
        return buildtree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,hm);


    }
    TreeNode*buildtree(vector<int>& postorder,int ps,int pe,vector<int>inorder,int is,int ie,map<int,int>&hm)
    {
        if(ps>pe || is>ie){
            return NULL;

        }
        TreeNode *root=new TreeNode(postorder[pe]);
        int iroot=hm[postorder[pe]];
        int numsleft=iroot-is;
        root->left=buildtree(postorder,ps,ps+numsleft-1,inorder,is,iroot-1,hm);
        root->right=buildtree(postorder,ps+numsleft,pe-1,inorder,iroot+1,ie,hm);
        return root;


    }

};