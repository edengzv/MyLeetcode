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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p == NULL || q == NULL){
            if(p == NULL && q == NULL)
                return true;
            else
                return false;
        }
        if(p->val == q->val){
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }else{
            return false;
        }
    }
};
