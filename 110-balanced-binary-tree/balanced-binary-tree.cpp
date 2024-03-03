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
    bool heightDFS(TreeNode* root, int& height){
        if(root == nullptr) {
            height = -1;
            return true;
        }
        int left = 0, right = 0;
        if(!heightDFS(root->left, left) || !heightDFS(root->right, right)) return false;
        if(abs(left - right) > 1) return false;
        height = 1 + max(left, right);
        return true;
    }

    bool isBalanced(TreeNode* root) {
        int height = 0;
        return heightDFS(root, height);        
    }
};