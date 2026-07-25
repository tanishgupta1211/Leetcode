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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool rev = false;
        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);
            for (int i = 0; i < n; i++){

                TreeNode* curr = q.front();
                q.pop();

                int idx;
                if (!rev) idx = i;
                else idx = n - i - 1;
                level[idx] = curr->val;

                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            ans.push_back(level);
            rev = !rev;
        }
        return ans;
    }
};