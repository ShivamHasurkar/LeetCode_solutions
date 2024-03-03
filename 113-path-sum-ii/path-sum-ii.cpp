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
    void dfs(TreeNode* root, int targetSum, vector<int>& curr, vector<vector<int>>& result){
        if(!root) return;
        curr.push_back(root->val);
        targetSum -= root->val;
        if(!root->left && !root->right && targetSum == 0) result.push_back(curr);
        else {
            dfs(root->left, targetSum, curr, result);
            dfs(root->right, targetSum, curr, result);
        }
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> curr;
        dfs(root, targetSum, curr, result);
        return vector<vector<int>>(result.begin(), result.end());
    }
};