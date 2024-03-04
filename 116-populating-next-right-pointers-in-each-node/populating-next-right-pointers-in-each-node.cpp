/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<Node*> level;

            for(int i=0;i<size;i++){
                Node* curr = q.front();
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                level.push_back(curr);
            }

            for(int i=0;i<level.size();i++){
                Node* node = level[i];
                if(i == level.size()-1) node->next == nullptr;
                else node->next = level[i+1];
            }
        }
        return root;
    }
};