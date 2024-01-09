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
    int minDepth(TreeNode* root) {

        //base cases
        if(!root){
            return 0;
        }
        
        if(!root->left && !root->right){
            return 1;
        }

        int leftDepth  = (root->left == nullptr) ? INT_MAX : minDepth(root->left); 
        int rightDepth = (root->right == nullptr) ? INT_MAX : minDepth(root->right); 

        return 1 + min(leftDepth, rightDepth);
        
    }
};