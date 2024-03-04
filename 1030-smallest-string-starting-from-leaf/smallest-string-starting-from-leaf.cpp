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
    void dfs(TreeNode* node, string curr, string& smallest){
        if(node){
            curr = (char) ('a' + node->val) + curr;

            if(!node->left && !node->right) {
                if(smallest.empty() || curr < smallest) smallest = curr;
            }

            if(node->left) dfs(node->left, curr, smallest);
            if(node->right) dfs(node->right, curr, smallest);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        string smallest = "";
        dfs(root, "", smallest);
        return smallest;
    }
};