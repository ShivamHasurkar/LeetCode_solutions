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
    pair<int, int> robHelper(TreeNode* root){
        if(!root) return {};

        auto left = robHelper(root->left);
        auto right = robHelper(root->right);

        int rob = root->val + left.second + right.second;
        int notRob = max(left.first, left.second) + max(right.first, right.second);

        return {rob, notRob};
    }
    int rob(TreeNode* root) {
        auto result = robHelper(root);
        return max(result.first, result.second);
    }
};