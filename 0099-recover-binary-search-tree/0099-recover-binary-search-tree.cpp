
class Solution {
public:
    TreeNode* first = NULL, *mid = NULL, *last = NULL, *prev = NULL;
    void inorder(TreeNode* root) {
        if (!root)
            return;
        inorder(root->left);
        if (prev && prev->val > root->val) {
            if (!first) {
                first = prev;
                mid = root;
            }
            else last = root;
        }
        prev = root;
        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        if (first && last)
            swap(first->val, last->val);
        else
            swap(first->val, mid->val);
    }
};