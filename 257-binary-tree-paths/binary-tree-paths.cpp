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
    void dfs(TreeNode* node, string curr, vector<string>& paths){
        if(node){
            if(curr == "") curr += to_string(node->val);
            else curr += ("->" + to_string(node->val));

            if(!node->left && !node->right) paths.push_back(curr);
            if(node->left) dfs(node->left, curr, paths);
            if(node->right) dfs(node->right, curr, paths);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        string curr = "";
        dfs(root, curr, paths);
        return paths;
    }
};