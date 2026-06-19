class Solution {
public:
    void func(TreeNode* node, vector<int>& ans){
        if(node == nullptr) return;
        func(node->left, ans);
        ans.push_back(node->val);
        func(node->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        func(root, ans);
        return ans;
    }
};