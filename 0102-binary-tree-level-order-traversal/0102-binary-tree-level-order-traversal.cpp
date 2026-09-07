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

    int levels(TreeNode* root) {
        if (root == NULL) return 0;

        return 1 + max(levels(root->left), levels(root->right));
    }

    vector<vector<int>> levelOrder(TreeNode* root) {

        int n = levels(root);

        vector<vector<int>> ans(n);

        if (root == NULL) return ans;

        queue<pair<TreeNode*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {

            auto front = q.front();
            q.pop();

            TreeNode* node = front.first;
            int lvl = front.second;

            ans[lvl].push_back(node->val);

            if (node->left != NULL) {
                q.push({node->left, lvl + 1});
            }

            if (node->right != NULL) {
                q.push({node->right, lvl + 1});
            }
        }

        return ans;
    }
};