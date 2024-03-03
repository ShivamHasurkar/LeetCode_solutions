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
    int diameterBT(TreeNode* root, int& diameter){
        if(root == nullptr) return 0;
        int maxLeft = diameterBT(root->left, diameter);
        int maxRight = diameterBT(root->right, diameter);
        diameter = max(diameter, maxLeft + maxRight);
        return 1 + max(maxLeft, maxRight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        diameterBT(root, diameter);
        return diameter;
    }
};