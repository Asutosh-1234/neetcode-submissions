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
    void result(TreeNode* root, int level, vector<int> &sol){
        if(root == nullptr){
            return;
        }

        if(sol.size() == level) sol.push_back(root->val);
        result(root->right, level+1, sol);
        result(root->left, level+1, sol);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> sol;
        result(root, 0, sol);
        return sol;
    }
};
