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
    void invert(TreeNode* root) {
        if(root == NULL)return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invert(root->left);
        invert(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
       invert(root);
       return root;
    }
      bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL||q==NULL)return (p==q);
        if (isSameTree(p->left,q->left) && isSameTree(p->right,q->right) && p->val == q->val) return true;
        else return false;
    }
    bool isSymmetric(TreeNode* root) {
        invert(root->right);
        bool ans = isSameTree(root->left,root->right);
        invert(root->right);
          return ans;
    }
};