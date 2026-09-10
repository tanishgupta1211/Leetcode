class Solution {
public:
    int Sum(TreeNode* root){
        if (root == NULL) return 0;
        return root->val + Sum(root->left) + Sum(root->right);
    }

    int Count(TreeNode* root){
        if (root == NULL) return 0;
        return 1 + Count(root->left) + Count(root->right);
    }

    int answer(TreeNode* root) {
        if (root == NULL) return 0;
        int sum = Sum(root);
        int cnt = Count(root);
        int avg = sum / cnt;
        int ans = 0;
        if (root->val == avg) ans++;
        ans += answer(root->left);
        ans += answer(root->right);
        return ans;
    }

    int averageOfSubtree(TreeNode* root) {
        return answer(root);
    }
};