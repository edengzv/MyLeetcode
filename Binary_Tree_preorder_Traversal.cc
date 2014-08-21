/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> ans;
        stack<TreeNode *> node;
        TreeNode *cur = root;
        if(root == NULL){
            return ans;
        }
        node.push(root);
        while(!node.empty()){
            cur = node.top();
            node.pop();
            ans.push_back(cur->val);
            if(cur->right){
                node.push(cur->right);
            }
            if(cur->left){
                node.push(cur->left);
            }
        }
        return ans;
    }
};
