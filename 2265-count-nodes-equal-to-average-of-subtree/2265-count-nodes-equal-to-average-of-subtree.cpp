class Solution {
public:
    pair<int, int> dfs(TreeNode* root, int& ans){
        if (root == NULL) return {0, 0};
        pair<int, int> left = dfs(root->left, ans);
        pair<int, int> right = dfs(root->right, ans);
        int sum = left.first + right.first + root->val;
        int cnt = left.second + right.second + 1;
        if (root->val == sum / cnt) ans++;
        return {sum, cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
};