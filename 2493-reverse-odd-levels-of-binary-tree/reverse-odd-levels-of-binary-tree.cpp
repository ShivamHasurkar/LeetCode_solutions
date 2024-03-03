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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root == nullptr) return nullptr;

        queue<TreeNode*> q;
        q.push(root);
        bool oddLevel = false;

        while(!q.empty()){
            int size = q.size();
            vector<TreeNode*> levelNodes;

            for(int i=0;i<size ; i++){
                TreeNode* curr = q.front();
                q.pop();
                levelNodes.push_back(curr);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            if(oddLevel){
                for(int i=0;i<size / 2;i++){
                    swap(levelNodes[i]->val, levelNodes[size-1-i]->val);
                }
            }

            oddLevel = !oddLevel;
        }

        return root;
    }
};