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
    int pathSum(TreeNode* root, int& maxi) {
        if (root == nullptr) return 0;
        int leftMax = max(0, pathSum(root->left, maxi));
        int rightMax = max(0, pathSum(root->right, maxi));
        maxi = max(maxi, leftMax + rightMax + root->val);
        return max(leftMax, rightMax) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathSum(root, maxi);
        return maxi;
    }
};