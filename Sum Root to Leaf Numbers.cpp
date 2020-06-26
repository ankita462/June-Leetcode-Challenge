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
    
    int sumNumber(TreeNode* root,int sum) {
        if(root==NULL) {
            return 0;
        }
        if(root->left==NULL && root->right==NULL) {
            return sum*10+root->val;
        }
        return sumNumber(root->left,sum*10+root->val) + sumNumber(root->right,sum*10+root->val);
    }
    
    int sumNumbers(TreeNode* root) {
        return sumNumber(root,0);
    }
};
