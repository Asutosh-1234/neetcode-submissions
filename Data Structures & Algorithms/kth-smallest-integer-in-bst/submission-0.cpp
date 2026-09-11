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
    void res(TreeNode* root, vector<int>& ele){
        if(root == nullptr) {
            return;  
        }
        ele.push_back(root->val);
        res(root->left, ele);
        res(root->right, ele);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ele;
        res(root, ele);
        sort(ele.begin(), ele.end());
        return ele[k-1];
        
    }
};
