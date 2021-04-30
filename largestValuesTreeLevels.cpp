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
    vector<int> largestValues(TreeNode* root) {
        // solve with bfs
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans; 
        if(root == NULL) {
            return ans;
        }
        while(q.size() != 0) {
            int n = INT_MIN;
            int size = q.size();
            
            for(int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) {q.push(temp->left);}
                if(temp->right) {q.push(temp->right);}
                if(n < temp->val){n = temp->val;}
            }
            ans.emplace_back(n);
        }
        return ans;
        
    }
    
};