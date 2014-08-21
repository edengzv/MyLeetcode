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
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode *> node;
        stack<bool> sign;
        vector<int> ans;
        TreeNode *cur;
        bool cursign;
        if(root == NULL){
            return ans;
        }
        node.push(root);
        sign.push(false);
        while(!node.empty()){
            cur = node.top();
            cursign = sign.top();
            sign.pop();
            if(cursign == false){
                sign.push(true);
                if(cur->left){
                    node.push(cur->left);
                    sign.push(false);
                }
            }else{
                ans.push_back(cur->val);
                node.pop();
                if(cur->right){
                    node.push(cur->right);
                    sign.push(false);
                }
            }
        }
        return ans;
    }
};
