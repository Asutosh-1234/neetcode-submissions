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
    typedef long long ll;
public: 
    bool res(TreeNode* root, ll minV, ll maxV){
        if(root == nullptr) return true;
        if(root->val <= minV || root->val >= maxV) return false;
        return res(root->left, minV, root->val) && 
               res(root->right, root->val, maxV);
    }

    bool isValidBST(TreeNode* root) {
        return res(root, LLONG_MIN, LLONG_MAX);
    }
};
